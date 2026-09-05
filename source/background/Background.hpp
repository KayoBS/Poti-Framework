#pragma once

#include <raylib.h>
#include <string>

class Background {
	private:
		Texture2D image;

	public:
		Background();
		Background(std::string path);

		void setimage(std::string path);
		Texture2D getimage();
}
