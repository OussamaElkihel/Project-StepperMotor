# Stepper Motor Controller
Repository of a project that aims to develop a graphical user interface (GUI) to control a 5V stepper motor using the STM32F429 microcontroller.
This Repository contains source code of the GUI as well as the logic to control the motor.
The GUI was implemented using the TouchGFX framework which includes TouchGFX Designer and TouchGFX engine. The GUI is displayed on a 2.4" QVGA TFT LCD touchscreen.
The GUI is comprised of multiple screens, each of which serve a specific purpose. The following are examples of screens that have been implemented:

# Functionality

## Mode Selection:

![screen1](https://github.com/OussamaElkihel/Project-StepperMotor/assets/129800481/f2988e0e-255e-4a3c-a02a-a9cbd1e71ad2)

## Choosing Angle:

![screen2](https://github.com/OussamaElkihel/Project-StepperMotor/assets/129800481/de5baaa5-ae86-4ec3-a812-f6d3997f2ab9)

## Start-Stop

![screen4](https://github.com/OussamaElkihel/Project-StepperMotor/assets/129800481/7577fd87-40e3-4dca-ac7d-aa5b3033aae4)

The logic is as follows:
First, the user is asked to select the mode of operation (Static or Oscillation mode). Then, the user is asked to enter a specific angle.
After the angle is selected, the user is asked to enter the speed. The final screen allows the user to stop or start the motor using the parameters specified.

## Demo video:

https://github.com/OussamaElkihel/Project-StepperMotor/assets/129800481/dff3edfc-be58-44b8-801c-5cd1b8857aed




