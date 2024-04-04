#ifndef SCREENSTARTSTOP_0VIEW_HPP
#define SCREENSTARTSTOP_0VIEW_HPP

#include <gui_generated/screenstartstop_0_screen/ScreenStartStop_0ViewBase.hpp>
#include <gui/screenstartstop_0_screen/ScreenStartStop_0Presenter.hpp>

class ScreenStartStop_0View : public ScreenStartStop_0ViewBase
{
public:
    ScreenStartStop_0View();
    virtual ~ScreenStartStop_0View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENSTARTSTOP_0VIEW_HPP
