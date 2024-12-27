#include <gui/mainscreen_screen/MainScreenView.hpp>

MainScreenView::MainScreenView()
{

}

void MainScreenView::setupScreen()
{
    MainScreenViewBase::setupScreen();
}

void MainScreenView::tearDownScreen()
{
    MainScreenViewBase::tearDownScreen();
}

void MainScreenView::functionSelectOsc(){
    presenter->setMode(1);
}

void MainScreenView::functionSelectSta(){
    presenter->setMode(0);
}