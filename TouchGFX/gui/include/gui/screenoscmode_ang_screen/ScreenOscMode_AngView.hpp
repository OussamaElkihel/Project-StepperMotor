#ifndef SCREENOSCMODE_ANGVIEW_HPP
#define SCREENOSCMODE_ANGVIEW_HPP

#include <gui_generated/screenoscmode_ang_screen/ScreenOscMode_AngViewBase.hpp>
#include <gui/screenoscmode_ang_screen/ScreenOscMode_AngPresenter.hpp>

class ScreenOscMode_AngView : public ScreenOscMode_AngViewBase
{
public:
    ScreenOscMode_AngView();
    virtual ~ScreenOscMode_AngView() {}
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


#endif // SCREENOSCMODE_ANGVIEW_HPP
