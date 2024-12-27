#ifndef SCREENSTAMODE_ANGPRESENTER_HPP
#define SCREENSTAMODE_ANGPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenStaMode_AngView;

class ScreenStaMode_AngPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenStaMode_AngPresenter(ScreenStaMode_AngView& v);

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

    virtual ~ScreenStaMode_AngPresenter() {}

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
    ScreenStaMode_AngPresenter();

    ScreenStaMode_AngView& view;
};

#endif // SCREENSTAMODE_ANGPRESENTER_HPP
