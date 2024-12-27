#ifndef STEPPER_USER_H
#define STEPPER_USER_H

extern float shared_angle;
extern int shared_motor_stopped;
extern int shared_mode;
extern int shared_speed;

//void step_to_angle(float a);

//void stepper_step(int step, int d);

//void Stepper_Task(void* argument);

void step_to_angle(float _angle, int step_delay);

void stepper_step(int step, int step_delay);

void Stepper_Task(void *argument);


#endif

