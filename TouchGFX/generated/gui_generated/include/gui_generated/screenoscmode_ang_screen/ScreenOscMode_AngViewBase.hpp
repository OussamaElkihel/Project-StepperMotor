/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENOSCMODE_ANGVIEWBASE_HPP
#define SCREENOSCMODE_ANGVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screenoscmode_ang_screen/ScreenOscMode_AngPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class ScreenOscMode_AngViewBase : public touchgfx::View<ScreenOscMode_AngPresenter>
{
public:
    ScreenOscMode_AngViewBase();
    virtual ~ScreenOscMode_AngViewBase();
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void functionValidate()
    {
        // Override and implement this function in ScreenOscMode_Ang
    }
    virtual void functionKey1()
    {
        // Override and implement this function in ScreenOscMode_Ang
    }
    virtual void functionKey2()
    {
        // Override and implement this function in ScreenOscMode_Ang
    }
    virtual void functionKey3()
    {
        // Override and implement this function in ScreenOscMode_Ang
    }
    virtual void functionKey4()
    {
        // Override and implement this function in ScreenOscMode_Ang
    }
    virtual void functionKey5()
    {
        // Override and implement this function in ScreenOscMode_Ang
    }
    virtual void functionKey6()
    {
        // Override and implement this function in ScreenOscMode_Ang
    }
    virtual void functionKey7()
    {
        // Override and implement this function in ScreenOscMode_Ang
    }
    virtual void functionKey8()
    {
        // Override and implement this function in ScreenOscMode_Ang
    }
    virtual void functionKey9()
    {
        // Override and implement this function in ScreenOscMode_Ang
    }
    virtual void functionKey0()
    {
        // Override and implement this function in ScreenOscMode_Ang
    }
    virtual void functionComma()
    {
        // Override and implement this function in ScreenOscMode_Ang
    }
    virtual void functionDelete()
    {
        // Override and implement this function in ScreenOscMode_Ang
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image image1;
    touchgfx::ButtonWithLabel buttonDelete;
    touchgfx::ButtonWithLabel buttonKey3;
    touchgfx::TextArea textArea1;
    touchgfx::TextArea textArea2;
    touchgfx::BoxWithBorder boxWithBorder1;
    touchgfx::ButtonWithLabel buttonKey1;
    touchgfx::ButtonWithLabel buttonKey0;
    touchgfx::ButtonWithLabel buttonKey2;
    touchgfx::ButtonWithLabel buttonKeyComma;
    touchgfx::ButtonWithLabel buttonKey4;
    touchgfx::ButtonWithLabel buttonKey5;
    touchgfx::ButtonWithLabel buttonKey6;
    touchgfx::ButtonWithLabel buttonKey7;
    touchgfx::ButtonWithLabel buttonKey8;
    touchgfx::ButtonWithLabel buttonKey9;
    touchgfx::ButtonWithIcon buttonBackOsc;
    touchgfx::ButtonWithIcon buttonValidate;
    touchgfx::TextAreaWithOneWildcard textArea3;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREA3_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textArea3Buffer[TEXTAREA3_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ScreenOscMode_AngViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SCREENOSCMODE_ANGVIEWBASE_HPP
