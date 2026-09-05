#include <Background.hpp>
#include <string>


Beckground::Background() {}
Beckground::Background(std::string path) {
	this->image = LoadTexture(path.c_str());
}

void Background::setImage(std::string path) {
	this->image = LoadTexture(path.c_str());
}
Texture2D Background::getImage(){
	return this->image;
}
