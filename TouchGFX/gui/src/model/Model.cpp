#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <math.h>

#ifndef  SIMULATOR
#include "main.h"
#include "stepper_user.h"
#endif

Model::Model() : modelListener(0), angle(0.0), speed(0), mode(0), motorStopped(true)
{

}

void Model::tick(){
	shared_angle = angle;
	shared_speed = speed;
    shared_motor_stopped = (int) motorStopped;
	shared_mode = mode;
}
