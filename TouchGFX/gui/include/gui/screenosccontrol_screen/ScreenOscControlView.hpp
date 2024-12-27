#ifndef SCREENOSCCONTROLVIEW_HPP
#define SCREENOSCCONTROLVIEW_HPP

#include <gui_generated/screenosccontrol_screen/ScreenOscControlViewBase.hpp>
#include <gui/screenosccontrol_screen/ScreenOscControlPresenter.hpp>

class ScreenOscControlView : public ScreenOscControlViewBase
{
public:
    ScreenOscControlView();
    virtual ~ScreenOscControlView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void functionOscStop();
    virtual void functionOscStart();
protected:
};

#endif // SCREENOSCCONTROLVIEW_HPP
