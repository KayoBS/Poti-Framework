#pragma once

#include <raylib.h>
#include <string>

class Window {
	private:
		Window();

    Vector2 screenSize;
    unsigned short fps;
		std::string winName;

	public:
		Window(int screenWidth, int screenHeight, int fps, std::string windowName);

		void init();
    void update();
		
		void setScreenHeight(int screenHeight);
		void setScreenWidth(int screenWidth);
		void setFps(int fps);
		void setWindowName(std::string windowName);
		
		int getScreenHeight();
		int getScreenWidth();
		int getFps();
		std::string getWindowName();
};
