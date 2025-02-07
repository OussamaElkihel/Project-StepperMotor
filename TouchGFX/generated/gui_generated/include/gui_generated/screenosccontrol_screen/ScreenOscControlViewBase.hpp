/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENOSCCONTROLVIEWBASE_HPP
#define SCREENOSCCONTROLVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screenosccontrol_screen/ScreenOscControlPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>

class ScreenOscControlViewBase : public touchgfx::View<ScreenOscControlPresenter>
{
public:
    ScreenOscControlViewBase();
    virtual ~ScreenOscControlViewBase();
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void functionOscStart()
    {
        // Override and implement this function in ScreenOscControl
    }
    virtual void functionOscStop()
    {
        // Override and implement this function in ScreenOscControl
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
    touchgfx::TextAreaWithOneWildcard textArea1;
    touchgfx::TextArea textArea2;
    touchgfx::TextAreaWithOneWildcard textArea3;
    touchgfx::ButtonWithLabel buttonStartSta;
    touchgfx::ButtonWithLabel buttonStopSta;
    touchgfx::ButtonWithIcon buttonBack;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREA1_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textArea1Buffer[TEXTAREA1_SIZE];
    static const uint16_t TEXTAREA3_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textArea3Buffer[TEXTAREA3_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ScreenOscControlViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SCREENOSCCONTROLVIEWBASE_HPP
