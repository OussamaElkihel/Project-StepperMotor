/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screenstamode_ang_screen/ScreenStaMode_AngViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

ScreenStaMode_AngViewBase::ScreenStaMode_AngViewBase() :
    buttonCallback(this, &ScreenStaMode_AngViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_240X320_LINES_ID));
    add(image1);

    buttonDelete.setXY(170, 204);
    buttonDelete.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID));
    buttonDelete.setLabelText(touchgfx::TypedText(T___SINGLEUSE_QLC8));
    buttonDelete.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonDelete.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonDelete.setAction(buttonCallback);
    add(buttonDelete);

    buttonKey3.setXY(120, 117);
    buttonKey3.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID));
    buttonKey3.setLabelText(touchgfx::TypedText(T___SINGLEUSE_ZK3G));
    buttonKey3.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKey3.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKey3.setAction(buttonCallback);
    add(buttonKey3);

    textArea1.setXY(61, 8);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_6RT1));
    add(textArea1);

    textArea2.setXY(44, 33);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_M0I9));
    add(textArea2);

    boxWithBorder1.setPosition(0, 58, 240, 50);
    boxWithBorder1.setColor(touchgfx::Color::getColorFromRGB(43, 41, 87));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    boxWithBorder1.setBorderSize(5);
    add(boxWithBorder1);

    buttonKey1.setXY(15, 117);
    buttonKey1.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID));
    buttonKey1.setLabelText(touchgfx::TypedText(T___SINGLEUSE_61DR));
    buttonKey1.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKey1.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKey1.setAction(buttonCallback);
    add(buttonKey1);

    buttonKey0.setXY(68, 252);
    buttonKey0.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID));
    buttonKey0.setLabelText(touchgfx::TypedText(T___SINGLEUSE_XZJL));
    buttonKey0.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKey0.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKey0.setAction(buttonCallback);
    add(buttonKey0);

    buttonKey2.setXY(68, 117);
    buttonKey2.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID));
    buttonKey2.setLabelText(touchgfx::TypedText(T___SINGLEUSE_NCU9));
    buttonKey2.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKey2.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKey2.setAction(buttonCallback);
    add(buttonKey2);

    buttonKeyComma.setXY(15, 252);
    buttonKeyComma.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID));
    buttonKeyComma.setLabelText(touchgfx::TypedText(T___SINGLEUSE_NZKZ));
    buttonKeyComma.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKeyComma.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKeyComma.setAction(buttonCallback);
    add(buttonKeyComma);

    buttonKey4.setXY(15, 160);
    buttonKey4.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID));
    buttonKey4.setLabelText(touchgfx::TypedText(T___SINGLEUSE_R59X));
    buttonKey4.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKey4.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKey4.setAction(buttonCallback);
    add(buttonKey4);

    buttonKey5.setXY(68, 160);
    buttonKey5.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID));
    buttonKey5.setLabelText(touchgfx::TypedText(T___SINGLEUSE_T94D));
    buttonKey5.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKey5.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKey5.setAction(buttonCallback);
    add(buttonKey5);

    buttonKey6.setXY(120, 160);
    buttonKey6.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID));
    buttonKey6.setLabelText(touchgfx::TypedText(T___SINGLEUSE_Q1YI));
    buttonKey6.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKey6.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKey6.setAction(buttonCallback);
    add(buttonKey6);

    buttonKey7.setXY(15, 204);
    buttonKey7.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID));
    buttonKey7.setLabelText(touchgfx::TypedText(T___SINGLEUSE_WM6T));
    buttonKey7.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKey7.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKey7.setAction(buttonCallback);
    add(buttonKey7);

    buttonKey8.setXY(68, 204);
    buttonKey8.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID));
    buttonKey8.setLabelText(touchgfx::TypedText(T___SINGLEUSE_7Z81));
    buttonKey8.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKey8.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKey8.setAction(buttonCallback);
    add(buttonKey8);

    buttonKey9.setXY(120, 204);
    buttonKey9.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_FILL_DISABLED_ID));
    buttonKey9.setLabelText(touchgfx::TypedText(T___SINGLEUSE_UQ42));
    buttonKey9.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKey9.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonKey9.setAction(buttonCallback);
    add(buttonKey9);

    buttonBackSta.setXY(130, 270);
    buttonBackSta.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUNDED_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUNDED_PRESSED_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_NAVIGATION_ARROW_BACK_50_50_E8F6FB_SVG_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_NAVIGATION_ARROW_BACK_50_50_E8F6FB_SVG_ID));
    buttonBackSta.setIconXY(30, 0);
    buttonBackSta.setAction(buttonCallback);
    add(buttonBackSta);

    buttonValidate.setXY(170, 117);
    buttonValidate.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_DISABLED_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_ACTION_DONE_50_50_E8F6FB_SVG_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_ACTION_DONE_50_50_E8F6FB_SVG_ID));
    buttonValidate.setIconXY(5, 5);
    buttonValidate.setAction(buttonCallback);
    add(buttonValidate);

    textArea3.setXY(7, 71);
    textArea3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea3.setLinespacing(0);
    Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_O6GL).getText());
    textArea3.setWildcard(textArea3Buffer);
    textArea3.resizeToCurrentText();
    textArea3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_5LIV));
    add(textArea3);
}

ScreenStaMode_AngViewBase::~ScreenStaMode_AngViewBase()
{

}

void ScreenStaMode_AngViewBase::setupScreen()
{

}

void ScreenStaMode_AngViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonBackSta)
    {
        //InteractionBack
        //When buttonBackSta clicked change screen to ScreenModeSel
        //Go to ScreenModeSel with screen transition towards West
        application().gotoScreenModeSelScreenSlideTransitionWest();
    }
    if (&src == &buttonValidate)
    {
        //InteractionValidate
        //When buttonValidate clicked change screen to ScreenStaMode_Spd
        //Go to ScreenStaMode_Spd with screen transition towards East
        application().gotoScreenStaMode_SpdScreenSlideTransitionEast();
    }
    if (&src == &buttonKey1)
    {
        //InteractionKey1
        //When buttonKey1 clicked call virtual function
        //Call functionKey1
        functionKey1();
    }
    if (&src == &buttonKey2)
    {
        //InteractionKey2
        //When buttonKey2 clicked call virtual function
        //Call functionKey2
        functionKey2();
    }
    if (&src == &buttonKey3)
    {
        //InteractionKey3
        //When buttonKey3 clicked call virtual function
        //Call functionKey3
        functionKey3();
    }
    if (&src == &buttonKey4)
    {
        //InteractionKey4
        //When buttonKey4 clicked call virtual function
        //Call functionKey4
        functionKey4();
    }
    if (&src == &buttonKey5)
    {
        //InteractionKey5
        //When buttonKey5 clicked call virtual function
        //Call functionKey5
        functionKey5();
    }
    if (&src == &buttonKey6)
    {
        //InteractionKey6
        //When buttonKey6 clicked call virtual function
        //Call functionKey6
        functionKey6();
    }
    if (&src == &buttonKey7)
    {
        //InteractionKey7
        //When buttonKey7 clicked call virtual function
        //Call functionKey7
        functionKey7();
    }
    if (&src == &buttonKey8)
    {
        //InteractionKey8
        //When buttonKey8 clicked call virtual function
        //Call functionKey8
        functionKey8();
    }
    if (&src == &buttonKey9)
    {
        //InteractionKey9
        //When buttonKey9 clicked call virtual function
        //Call functionKey9
        functionKey9();
    }
    if (&src == &buttonKey0)
    {
        //InteractionKey0
        //When buttonKey0 clicked call virtual function
        //Call functionKey0
        functionKey0();
    }
    if (&src == &buttonKeyComma)
    {
        //InteractionComma
        //When buttonKeyComma clicked call virtual function
        //Call functionComma
        functionComma();
    }
    if (&src == &buttonDelete)
    {
        //InteractionDelete
        //When buttonDelete clicked call virtual function
        //Call functionDelete
        functionDelete();
    }
}