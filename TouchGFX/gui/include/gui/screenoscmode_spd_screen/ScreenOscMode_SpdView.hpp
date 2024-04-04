#ifndef SCREENOSCMODE_SPDVIEW_HPP
#define SCREENOSCMODE_SPDVIEW_HPP

#include <gui_generated/screenoscmode_spd_screen/ScreenOscMode_SpdViewBase.hpp>
#include <gui/screenoscmode_spd_screen/ScreenOscMode_SpdPresenter.hpp>

class ScreenOscMode_SpdView : public ScreenOscMode_SpdViewBase
{
public:
    ScreenOscMode_SpdView();
    virtual ~ScreenOscMode_SpdView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENOSCMODE_SPDVIEW_HPP
