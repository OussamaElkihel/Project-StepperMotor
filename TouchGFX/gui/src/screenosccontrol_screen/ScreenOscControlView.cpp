#include <gui/screenosccontrol_screen/ScreenOscControlView.hpp>

ScreenOscControlView::ScreenOscControlView()
{

}

void ScreenOscControlView::setupScreen()
{
    Unicode::snprintfFloat(textArea1Buffer, TEXTAREA1_SIZE, "%.0f", presenter->getSpeed());
	textArea1.resizeToCurrentText();
	textArea1.invalidate();
	Unicode::snprintfFloat(textArea3Buffer, TEXTAREA3_SIZE, "%.2f", presenter->getAngle());
	textArea3.resizeToCurrentText();
	textArea3.invalidate();
    ScreenOscControlViewBase::setupScreen();
}

void ScreenOscControlView::tearDownScreen()
{
    ScreenOscControlViewBase::tearDownScreen();
}

void ScreenOscControlView::functionOscStart() {
	presenter->setMotorStopped(false);
}

void ScreenOscControlView::functionOscStop() {
	presenter->setMotorStopped(true);
}
