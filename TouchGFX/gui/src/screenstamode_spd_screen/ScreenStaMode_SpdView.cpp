#include <gui/screenstamode_spd_screen/ScreenStaMode_SpdView.hpp>
#include <stdlib.h>

ScreenStaMode_SpdView::ScreenStaMode_SpdView()
{

}

void ScreenStaMode_SpdView::setupScreen()
{
	Unicode::snprintfFloat(textArea1Buffer, TEXTAREA1_SIZE, "%.2f", presenter->getAngle());
	textArea1.resizeToCurrentText();
	textArea1.invalidate();
    ScreenStaMode_SpdViewBase::setupScreen();
}

void ScreenStaMode_SpdView::tearDownScreen()
{
    ScreenStaMode_SpdViewBase::tearDownScreen();
}

void ScreenStaMode_SpdView::functionKey0()
{
	Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%s%u", textArea3Buffer, 0);
	textArea3.resizeToCurrentText();
	buffer[positionText+1] = '0';
	positionText++;
	textArea3.invalidate();
}

void ScreenStaMode_SpdView::functionKey1()
{
	Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%s%u", textArea3Buffer, 1);
	textArea3.resizeToCurrentText();
	buffer[positionText+1] = '1';
	positionText++;
	textArea3.invalidate();
}

void ScreenStaMode_SpdView::functionKey2()
{
	Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%s%u", textArea3Buffer, 2);
	textArea3.resizeToCurrentText();
	buffer[positionText+1] = '2';
	positionText++;
	textArea3.invalidate();
}

void ScreenStaMode_SpdView::functionKey3()
{
	Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%s%u", textArea3Buffer, 3);
	textArea3.resizeToCurrentText();
	buffer[positionText+1] = '3';
	positionText++;
	textArea3.invalidate();
}

void ScreenStaMode_SpdView::functionKey4()
{
	Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%s%u", textArea3Buffer, 4);
	textArea3.resizeToCurrentText();
	buffer[positionText+1] = '4';
	positionText++;
	textArea3.invalidate();
}

void ScreenStaMode_SpdView::functionKey5()
{
	Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%s%u", textArea3Buffer, 5);
	textArea3.resizeToCurrentText();
	buffer[positionText+1] = '5';
	positionText++;
	textArea3.invalidate();
}

void ScreenStaMode_SpdView::functionKey6()
{
	Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%s%u", textArea3Buffer, 6);
	textArea3.resizeToCurrentText();
	buffer[positionText+1] = '6';
	positionText++;
	textArea3.invalidate();
}

void ScreenStaMode_SpdView::functionKey7()
{
	Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%s%u", textArea3Buffer, 7);
	textArea3.resizeToCurrentText();
	buffer[positionText+1] = '7';
	positionText++;
	textArea3.invalidate();
}

void ScreenStaMode_SpdView::functionKey8()
{
	Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%s%u", textArea3Buffer, 8);
	textArea3.resizeToCurrentText();
	buffer[positionText+1] = '8';
	positionText++;
	textArea3.invalidate();
}

void ScreenStaMode_SpdView::functionKey9()
{
	Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%s%u", textArea3Buffer, 9);
	textArea3.resizeToCurrentText();
	buffer[positionText+1] = '9';
	positionText++;
	textArea3.invalidate();
}

void ScreenStaMode_SpdView::functionComma()
{
	for (int i = 0; i < TEXTAREA3_SIZE; i++) {
		if (textArea3Buffer[i] == '.') return;
	}
	Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%s%c", textArea3Buffer, '.');
	textArea3.resizeToCurrentText();
	buffer[positionText+1] = '.';
	positionText++;
	textArea3.invalidate();
}

void ScreenStaMode_SpdView::functionDelete()
{
	if (positionText>0){
		buffer[positionText] = '\0';
		Unicode::strncpy(textArea3Buffer, buffer, TEXTAREA3_SIZE);
		textArea3.invalidate();
		positionText--;
	}
	else if (positionText==0){
		buffer[positionText] ='\0';
		Unicode::strncpy(textArea3Buffer, buffer, TEXTAREA3_SIZE);
		textArea3.invalidate();
		positionText = -1;
}
}

void ScreenStaMode_SpdView::functionValidate() {
	int speed = atof(buffer);
	presenter->setSpeed(speed);
}
