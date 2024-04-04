#ifndef SCREENMODESELPRESENTER_HPP
#define SCREENMODESELPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenModeSelView;

class ScreenModeSelPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenModeSelPresenter(ScreenModeSelView& v);

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

    virtual ~ScreenModeSelPresenter() {};

private:
    ScreenModeSelPresenter();

    ScreenModeSelView& view;
};

#endif // SCREENMODESELPRESENTER_HPP
