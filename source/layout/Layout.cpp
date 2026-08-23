#include "Layout.hpp"
#include <string>

Layout::Layout() {}
Layout::Layout(int screenWidth, int screenHeight, int fps, std::string windowname) {
  this->screenWidth = screenHeight;
	this->screenHeight = screenHeight;
	this->fps = fps;
	this->windowName = windowname;
}

void initLayout() {
	initWindow(screenWidth, screenHeight, windowName);
	SetTargetFPS(fps);
}

	void setScreenHeight(int screenHeight){
		this->screenHeight = screenHeight;
	}
	void setScreenWidth(int screenWidth){
		this->screenWidth = screenWidth;
	}
	void setFps(int fps){
		this->fps = fps;
	}
	void setWindowName(std::string windowName){
		this->windowName = windowName;
	}
	
	int getScreenHeight(){
		return screenHeight;
	}
	int getScreenWidth(){
		return screenWidth;
	}
	int getFps(){
		return fps;
	}
	std::string getWindowName(){
		return windowName;
	}
