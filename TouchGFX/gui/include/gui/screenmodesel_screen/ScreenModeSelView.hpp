#ifndef SCREENMODESELVIEW_HPP
#define SCREENMODESELVIEW_HPP

#include <gui_generated/screenmodesel_screen/ScreenModeSelViewBase.hpp>
#include <gui/screenmodesel_screen/ScreenModeSelPresenter.hpp>

class ScreenModeSelView : public ScreenModeSelViewBase
{
public:
    ScreenModeSelView();
    virtual ~ScreenModeSelView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENMODESELVIEW_HPP
