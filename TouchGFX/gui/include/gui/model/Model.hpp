#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void setAngle(float a) {
    	angle = a;
    }

    void setSpeed(int s) {
    	speed = s;
    }

    void setMotorStopped(bool m) {
    	motorStopped = m;
    }

    void setMode(int m){
        mode = m;
    }

    float getAngle() {
    	return angle;
    }

    int getSpeed() {
    	return speed;
    }

    bool getMotorStopped() {
    	return motorStopped;
    }

    int getMode(){
        return mode;
    }

    void tick();
protected:

    ModelListener* modelListener;

    float angle;
    int speed;
    int mode;
    bool motorStopped;

    int step_delay = 1;
};

#endif // MODEL_HPP
