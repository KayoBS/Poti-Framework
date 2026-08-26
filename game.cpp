#include "potifmw.hpp"

void Window::init() {
  InitWindow( this->screenSize.x, this->screenSize.y, this->winName.c_str() );
  SetTargetFPS(this->fps);
}

void Window::update() {

}
