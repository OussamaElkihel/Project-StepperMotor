#ifndef SCREENOSCMODE_ANGPRESENTER_HPP
#define SCREENOSCMODE_ANGPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenOscMode_AngView;

class ScreenOscMode_AngPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenOscMode_AngPresenter(ScreenOscMode_AngView& v);

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

    virtual ~ScreenOscMode_AngPresenter() {}

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
    ScreenOscMode_AngPresenter();

    ScreenOscMode_AngView& view;
};

#endif // SCREENOSCMODE_ANGPRESENTER_HPP
