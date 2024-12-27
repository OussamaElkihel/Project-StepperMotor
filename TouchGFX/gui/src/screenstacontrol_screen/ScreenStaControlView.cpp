#include <gui/screenstacontrol_screen/ScreenStaControlView.hpp>

ScreenStaControlView::ScreenStaControlView()
{

}

void ScreenStaControlView::setupScreen()
{
    Unicode::snprintfFloat(textArea1Buffer, TEXTAREA1_SIZE, "%.0f", presenter->getSpeed());
	textArea1.resizeToCurrentText();
	textArea1.invalidate();
	Unicode::snprintfFloat(textArea3Buffer, TEXTAREA3_SIZE, "%.2f", presenter->getAngle());
	textArea3.resizeToCurrentText();
	textArea3.invalidate();
    ScreenStaControlViewBase::setupScreen();
}

void ScreenStaControlView::tearDownScreen()
{
    ScreenStaControlViewBase::tearDownScreen();
}

void ScreenStaControlView::functionStaStop() {
    presenter->setMotorStopped(true);
}

void ScreenStaControlView::functionStaStart() {
    presenter->setMotorStopped(false);
}
