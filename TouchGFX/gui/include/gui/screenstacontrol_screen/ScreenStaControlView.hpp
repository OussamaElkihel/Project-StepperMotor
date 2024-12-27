#ifndef SCREENSTACONTROLVIEW_HPP
#define SCREENSTACONTROLVIEW_HPP

#include <gui_generated/screenstacontrol_screen/ScreenStaControlViewBase.hpp>
#include <gui/screenstacontrol_screen/ScreenStaControlPresenter.hpp>

class ScreenStaControlView : public ScreenStaControlViewBase
{
public:
    ScreenStaControlView();
    virtual ~ScreenStaControlView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void functionStaStop();
    virtual void functionStaStart();
protected:
};

#endif // SCREENSTACONTROLVIEW_HPP
