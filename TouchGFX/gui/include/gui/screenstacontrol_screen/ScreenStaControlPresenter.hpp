#ifndef SCREENSTACONTROLPRESENTER_HPP
#define SCREENSTACONTROLPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenStaControlView;

class ScreenStaControlPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenStaControlPresenter(ScreenStaControlView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~ScreenStaControlPresenter() {}

    void setAngle(float a) {
    	model->setAngle(a);
    }

    void setSpeed(int s) {
    	model->setSpeed(s);
    }

    void setMotorStopped(bool m) {
    	model->setMotorStopped(m);
    }

    float getAngle() {
    	return model->getAngle();
    }

    int getSpeed() {
    	return model->getSpeed();
    }

    bool getMotorStopped() {
    	return model->getMotorStopped();
    }

private:
    ScreenStaControlPresenter();

    ScreenStaControlView& view;
};

#endif // SCREENSTACONTROLPRESENTER_HPP
