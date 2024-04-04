#ifndef SCREENSTARTSTOP_0PRESENTER_HPP
#define SCREENSTARTSTOP_0PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenStartStop_0View;

class ScreenStartStop_0Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenStartStop_0Presenter(ScreenStartStop_0View& v);

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

    virtual ~ScreenStartStop_0Presenter() {};

private:
    ScreenStartStop_0Presenter();

    ScreenStartStop_0View& view;
};

#endif // SCREENSTARTSTOP_0PRESENTER_HPP
