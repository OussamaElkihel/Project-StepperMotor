/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <new>
#include <gui_generated/common/FrontendApplicationBase.hpp>
#include <gui/common/FrontendHeap.hpp>
#include <touchgfx/transitions/NoTransition.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <platform/driver/lcd/LCD16bpp.hpp>
#include <gui/screenmodesel_screen/ScreenModeSelView.hpp>
#include <gui/screenmodesel_screen/ScreenModeSelPresenter.hpp>
#include <gui/screenstamode_ang_screen/ScreenStaMode_AngView.hpp>
#include <gui/screenstamode_ang_screen/ScreenStaMode_AngPresenter.hpp>
#include <gui/screenstamode_spd_screen/ScreenStaMode_SpdView.hpp>
#include <gui/screenstamode_spd_screen/ScreenStaMode_SpdPresenter.hpp>
#include <gui/screenstartstop_0_screen/ScreenStartStop_0View.hpp>
#include <gui/screenstartstop_0_screen/ScreenStartStop_0Presenter.hpp>
#include <gui/screenoscmode_ang_screen/ScreenOscMode_AngView.hpp>
#include <gui/screenoscmode_ang_screen/ScreenOscMode_AngPresenter.hpp>
#include <gui/screenoscmode_spd_screen/ScreenOscMode_SpdView.hpp>
#include <gui/screenoscmode_spd_screen/ScreenOscMode_SpdPresenter.hpp>
#include <gui/screenstartstop_1_screen/ScreenStartStop_1View.hpp>
#include <gui/screenstartstop_1_screen/ScreenStartStop_1Presenter.hpp>

using namespace touchgfx;

FrontendApplicationBase::FrontendApplicationBase(Model& m, FrontendHeap& heap)
    : touchgfx::MVPApplication(),
      transitionCallback(),
      frontendHeap(heap),
      model(m)
{
    touchgfx::HAL::getInstance()->setDisplayOrientation(touchgfx::ORIENTATION_PORTRAIT);
    touchgfx::Texts::setLanguage(GB);
    reinterpret_cast<touchgfx::LCD16bpp&>(touchgfx::HAL::lcd()).enableTextureMapperAll();
}

/*
 * Screen Transition Declarations
 */

// ScreenModeSel

void FrontendApplicationBase::gotoScreenModeSelScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreenModeSelScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreenModeSelScreenNoTransitionImpl()
{
    touchgfx::makeTransition<ScreenModeSelView, ScreenModeSelPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotoScreenModeSelScreenSlideTransitionWest()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreenModeSelScreenSlideTransitionWestImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreenModeSelScreenSlideTransitionWestImpl()
{
    touchgfx::makeTransition<ScreenModeSelView, ScreenModeSelPresenter, touchgfx::SlideTransition<WEST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// ScreenStaMode_Ang

void FrontendApplicationBase::gotoScreenStaMode_AngScreenSlideTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreenStaMode_AngScreenSlideTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreenStaMode_AngScreenSlideTransitionEastImpl()
{
    touchgfx::makeTransition<ScreenStaMode_AngView, ScreenStaMode_AngPresenter, touchgfx::SlideTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotoScreenStaMode_AngScreenSlideTransitionWest()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreenStaMode_AngScreenSlideTransitionWestImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreenStaMode_AngScreenSlideTransitionWestImpl()
{
    touchgfx::makeTransition<ScreenStaMode_AngView, ScreenStaMode_AngPresenter, touchgfx::SlideTransition<WEST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// ScreenStaMode_Spd

void FrontendApplicationBase::gotoScreenStaMode_SpdScreenSlideTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreenStaMode_SpdScreenSlideTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreenStaMode_SpdScreenSlideTransitionEastImpl()
{
    touchgfx::makeTransition<ScreenStaMode_SpdView, ScreenStaMode_SpdPresenter, touchgfx::SlideTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotoScreenStaMode_SpdScreenSlideTransitionWest()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreenStaMode_SpdScreenSlideTransitionWestImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreenStaMode_SpdScreenSlideTransitionWestImpl()
{
    touchgfx::makeTransition<ScreenStaMode_SpdView, ScreenStaMode_SpdPresenter, touchgfx::SlideTransition<WEST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// ScreenStartStop_0

void FrontendApplicationBase::gotoScreenStartStop_0ScreenSlideTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreenStartStop_0ScreenSlideTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreenStartStop_0ScreenSlideTransitionEastImpl()
{
    touchgfx::makeTransition<ScreenStartStop_0View, ScreenStartStop_0Presenter, touchgfx::SlideTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// ScreenOscMode_Ang

void FrontendApplicationBase::gotoScreenOscMode_AngScreenSlideTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreenOscMode_AngScreenSlideTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreenOscMode_AngScreenSlideTransitionEastImpl()
{
    touchgfx::makeTransition<ScreenOscMode_AngView, ScreenOscMode_AngPresenter, touchgfx::SlideTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotoScreenOscMode_AngScreenSlideTransitionWest()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreenOscMode_AngScreenSlideTransitionWestImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreenOscMode_AngScreenSlideTransitionWestImpl()
{
    touchgfx::makeTransition<ScreenOscMode_AngView, ScreenOscMode_AngPresenter, touchgfx::SlideTransition<WEST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// ScreenOscMode_Spd

void FrontendApplicationBase::gotoScreenOscMode_SpdScreenSlideTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreenOscMode_SpdScreenSlideTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreenOscMode_SpdScreenSlideTransitionEastImpl()
{
    touchgfx::makeTransition<ScreenOscMode_SpdView, ScreenOscMode_SpdPresenter, touchgfx::SlideTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

void FrontendApplicationBase::gotoScreenOscMode_SpdScreenSlideTransitionWest()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreenOscMode_SpdScreenSlideTransitionWestImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreenOscMode_SpdScreenSlideTransitionWestImpl()
{
    touchgfx::makeTransition<ScreenOscMode_SpdView, ScreenOscMode_SpdPresenter, touchgfx::SlideTransition<WEST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// ScreenStartStop_1

void FrontendApplicationBase::gotoScreenStartStop_1ScreenSlideTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoScreenStartStop_1ScreenSlideTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoScreenStartStop_1ScreenSlideTransitionEastImpl()
{
    touchgfx::makeTransition<ScreenStartStop_1View, ScreenStartStop_1Presenter, touchgfx::SlideTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}