#include "./platform.hpp"

float Platform::getVelocity() {
  return this->velocity;
}

float Platform::getAceleration() {
  return this->aceleration;
}

void Platform::setVelocity( float velocity ) {
  this->velocity = velocity;
}

void Platform::setAceleration( float aceleration ) {
  this->aceleration = aceleration;
}
