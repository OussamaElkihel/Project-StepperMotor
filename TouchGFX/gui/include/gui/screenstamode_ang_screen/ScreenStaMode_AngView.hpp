#ifndef SCREENSTAMODE_ANGVIEW_HPP
#define SCREENSTAMODE_ANGVIEW_HPP

#include <gui_generated/screenstamode_ang_screen/ScreenStaMode_AngViewBase.hpp>
#include <gui/screenstamode_ang_screen/ScreenStaMode_AngPresenter.hpp>

class ScreenStaMode_AngView : public ScreenStaMode_AngViewBase
{
public:
    ScreenStaMode_AngView();
    virtual ~ScreenStaMode_AngView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void functionKey0();
    virtual void functionKey1();
    virtual void functionKey2();
    virtual void functionKey3();
    virtual void functionKey4();
    virtual void functionKey5();
    virtual void functionKey6();
    virtual void functionKey7();
    virtual void functionKey8();
    virtual void functionKey9();
    virtual void functionComma();
    virtual void functionDelete();
    virtual void functionValidate();
protected:
    int positionText = -1;
    char buffer[10] = {};
    char buffer1[10] = {};
    int i = 0;
};

#endif // SCREENSTAMODE_ANGVIEW_HPP
