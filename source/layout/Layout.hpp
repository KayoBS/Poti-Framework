#pragma once

#include <string>
class Layout {
	private:
		int screenHeight, screenWidth, fps;
		std::string windowName;

	public:
		Layout();
		Layout(int screenWidth, int screenHeight, int fps, std::string windowName);

		void initLayout();
		
		void setScreenHeight(int screenHeight);
		void setScreenWidth(int screenWidth);
		void setFps(int fps);
		void setWindowName(std::string windowName);
		
		int getScreenHeight();
		int getScreenWidth();
		int getFps();
		std::string getWindowName();
};
