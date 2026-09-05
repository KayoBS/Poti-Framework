#include <Background.hpp>
#include <string>


Beckground::Background() {}
Beckground::Background(std::string path) {
	this->image = LoadTexture(path.c_str());
}

void Background::setimage(std::string path) {
	this->image = LoadTexture(path.c_str());
}
Texture2D Background::getimage(){
	return this->image;
}
