/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/mainscreen_screen/MainScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

MainScreenViewBase::MainScreenViewBase() :
    buttonCallback(this, &MainScreenViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_240X320_LINES_ID));
    add(image1);

    textArea1.setXY(59, 20);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_T2BW));
    add(textArea1);

    buttonOscMode.setXY(33, 200);
    buttonOscMode.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_SMALL_ROUND_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_SMALL_ROUND_PRESSED_ID));
    buttonOscMode.setLabelText(touchgfx::TypedText(T___SINGLEUSE_755D));
    buttonOscMode.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonOscMode.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonOscMode.setAction(buttonCallback);
    add(buttonOscMode);

    buttonStaMode.setXY(33, 88);
    buttonStaMode.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_SMALL_ROUND_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_SMALL_ROUND_PRESSED_ID));
    buttonStaMode.setLabelText(touchgfx::TypedText(T___SINGLEUSE_D5KN));
    buttonStaMode.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonStaMode.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonStaMode.setAction(buttonCallback);
    add(buttonStaMode);
}

MainScreenViewBase::~MainScreenViewBase()
{

}

void MainScreenViewBase::setupScreen()
{

}

void MainScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonStaMode)
    {
        //InteractionStaMode
        //When buttonStaMode clicked change screen to ScreenStaMode_Ang
        //Go to ScreenStaMode_Ang with screen transition towards East
        application().gotoScreenStaMode_AngScreenSlideTransitionEast();
        //InteractionSelectSta
        //When buttonStaMode clicked call virtual function
        //Call functionSelectSta
        functionSelectSta();
    }
    if (&src == &buttonOscMode)
    {
        //InteractionOscMode
        //When buttonOscMode clicked change screen to ScreenOscMode_Ang
        //Go to ScreenOscMode_Ang with screen transition towards East
        application().gotoScreenOscMode_AngScreenSlideTransitionEast();
        //InteractionSelectOsc
        //When buttonOscMode clicked call virtual function
        //Call functionSelectOsc
        functionSelectOsc();
    }
}
