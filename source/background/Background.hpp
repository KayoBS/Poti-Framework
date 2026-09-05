#pragma once

#include <raylib.h>
#include <string>

class Background {
	private:
		Texture2D image;

	public:
		Background();
		Background(std::string path);

		void setImage(std::string path);
		Texture2D getImage();
};
