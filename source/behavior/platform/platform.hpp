#pragma once

#include "../behavior.hpp"

class Platform : Behavior {
  private:
    float velocity;
    float aceleration;

  public:
    float getVelocity();
    float getAceleration();

    void setVelocity( float velocity );
    void setAceleration( float aceleration );

    //moviment related methods
};
