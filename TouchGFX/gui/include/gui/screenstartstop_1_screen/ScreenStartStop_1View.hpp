#ifndef SCREENSTARTSTOP_1VIEW_HPP
#define SCREENSTARTSTOP_1VIEW_HPP

#include <gui_generated/screenstartstop_1_screen/ScreenStartStop_1ViewBase.hpp>
#include <gui/screenstartstop_1_screen/ScreenStartStop_1Presenter.hpp>

class ScreenStartStop_1View : public ScreenStartStop_1ViewBase
{
public:
    ScreenStartStop_1View();
    virtual ~ScreenStartStop_1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENSTARTSTOP_1VIEW_HPP
