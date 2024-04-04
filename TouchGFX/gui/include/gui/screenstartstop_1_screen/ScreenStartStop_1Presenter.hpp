#ifndef SCREENSTARTSTOP_1PRESENTER_HPP
#define SCREENSTARTSTOP_1PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenStartStop_1View;

class ScreenStartStop_1Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenStartStop_1Presenter(ScreenStartStop_1View& v);

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

    virtual ~ScreenStartStop_1Presenter() {};

private:
    ScreenStartStop_1Presenter();

    ScreenStartStop_1View& view;
};

#endif // SCREENSTARTSTOP_1PRESENTER_HPP
