#include "window.hpp"

Window::Window() {}
Window::Window(int screenWidth, int screenHeight, int fps, std::string windowname) {
  this->screenSize.x = screenHeight;
	this->screenSize.y = screenHeight;
	this->fps = fps;
	this->winName = windowname;
}

//faltava o Window:: em todos os métodos

void Window::setScreenHeight(int screenHeight){
	this->screenSize.y = screenHeight;
}
void Window::setScreenWidth(int screenWidth){
	this->screenSize.x = screenWidth;
}
void Window::setFps(int fps){
	this->fps = fps;
}
void Window::setWindowName(std::string windowName){
	this->winName = windowName;
}
	
int Window::getScreenHeight(){
	return this->screenSize.y;
}
int Window::getScreenWidth(){
	return this->screenSize.x;
}
int Window::getFps(){
	return this->fps;
}
std::string Window::getWindowName(){
	return this->winName;
}
