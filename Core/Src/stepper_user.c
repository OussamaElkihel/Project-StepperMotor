#include "stm32f4xx_hal.h"
#include "stepper_user.h"
#include "main.h"

//STEP_PIN_1 --> GPIO_PIN_15
//STEP_PIN_2 --> GPIO_PIN_14
//STEP_PIN_3 --> GPIO_PIN_13
//STEP_PIN_4 --> GPIO_PIN_12

__weak void Stepper_Task(void *argument)
{
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    HAL_GPIO_WritePin(GPIO_PORT, STEP_PIN_1 | STEP_PIN_2 | STEP_PIN_3 | STEP_PIN_4, GPIO_PIN_RESET);
    GPIO_InitStruct.Pin = STEP_PIN_1 | STEP_PIN_2 | STEP_PIN_3 | STEP_PIN_4;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIO_PORT, &GPIO_InitStruct);
    while (1)
    {
        if (!shared_motor_stopped)
        {
            if (shared_mode == OSCILLATOR_MODE)
            {
                step_to_angle(shared_angle, 1);
                step_to_angle(-shared_angle, 1);
                shared_motor_stopped = true;
            }
            else if (shared_mode == STATIC_MODE)
            {
                step_to_angle(shared_angle, 1);
                shared_motor_stopped = true;
            }
        }
        osDelay (1);
    }
}

void step_to_angle(float _angle, int step_delay)
{
#ifndef SIMULATOR
    float abs_angle = abs(_angle);

    int steps = round(abs_angle * MOTOR_STEPS / 360.0);

    if (_angle >= 0)
    {
        for (int i = 0; i < steps; i++)
        {
            stepper_step(i % 4);
            HAL_Delay(step_delay);
        }
    }
    else
    {
        for (int i = steps; i > 0; i--)
        {
            stepper_step(i % 4);
            HAL_Delay(step_delay);
        }
    }
#endif
}

void stepper_step(int step)
{
    switch (step)
    {
    case 0: // step 1
        HAL_GPIO_WritePin(GPIO_PORT, STEP_PIN_1, GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIO_PORT, STEP_PIN_2 | STEP_PIN_3 | STEP_PIN_4, GPIO_PIN_RESET);
        break;
    case 1: // step 2
        HAL_GPIO_WritePin(GPIO_PORT, STEP_PIN_2, GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIO_PORT, STEP_PIN_1 | STEP_PIN_3 | STEP_PIN_4, GPIO_PIN_RESET);
        break;
    case 2: // step 3
        HAL_GPIO_WritePin(GPIO_PORT, STEP_PIN_3, GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIO_PORT, STEP_PIN_1 | STEP_PIN_2 | STEP_PIN_4, GPIO_PIN_RESET);
        break;
    case 3: // step 4
        HAL_GPIO_WritePin(GPIO_PORT, STEP_PIN_4, GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIO_PORT, STEP_PIN_1 | STEP_PIN_2 | STEP_PIN_3, GPIO_PIN_RESET);
        break;
    default:
        break;
    }
}