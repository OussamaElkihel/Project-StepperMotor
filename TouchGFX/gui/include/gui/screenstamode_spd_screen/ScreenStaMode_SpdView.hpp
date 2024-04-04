#ifndef SCREENSTAMODE_SPDVIEW_HPP
#define SCREENSTAMODE_SPDVIEW_HPP

#include <gui_generated/screenstamode_spd_screen/ScreenStaMode_SpdViewBase.hpp>
#include <gui/screenstamode_spd_screen/ScreenStaMode_SpdPresenter.hpp>

class ScreenStaMode_SpdView : public ScreenStaMode_SpdViewBase
{
public:
    ScreenStaMode_SpdView();
    virtual ~ScreenStaMode_SpdView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENSTAMODE_SPDVIEW_HPP
