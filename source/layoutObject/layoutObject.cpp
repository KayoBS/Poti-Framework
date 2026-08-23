#include "./layoutObject.hpp"

//getters
Vector2 LayoutObject::getPosition() {
  return this->position;
}
Vector2 LayoutObject::getSize() {
  return this->size;
}
short int LayoutObject::getAngle() {
  return this->angle;
}
unsigned short int LayoutObject::getOpacity() {
  return this->opacity;
}

//setters
void LayoutObject::setPosition( Vector2 position ) {
  this->position = position;
}
void LayoutObject::setPosition( float x, float y ) {
  this->position.x = x;
  this->position.y = y;
}

void LayoutObject::setSize( Vector2 size ) {
  this->size = size;
}
void LayoutObject::setSize( float x, float y ) {
  this->size.x = x;
  this->size.y = y;
}

void LayoutObject::setAngle( short int angle ) {
  this->angle = angle;
}
void LayoutObject::setOpacity( unsigned short int opacity ) {
  this->opacity = opacity;
}

//special
