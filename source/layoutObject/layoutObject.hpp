#pragma once

#include <raylib.h>
#include "../behavior/behavior.hpp"

class LayoutObject {
  private:
    Vector2 position;
    Vector2 size;
    short int angle;
    unsigned short int opacity;

  protected:
    //LayoutObject clone();

  public:
    Behavior behavior;

    //getters
    Vector2 getPosition();
    Vector2 getSize();
    short int getAngle();
    unsigned short int getOpacity();

    //setters
    void setPosition( Vector2 position );
    void setPosition( float x, float y );
    void setSize( Vector2 size );
    void setSize( float x, float y );

    void setAngle( short int angle );
    void setOpacity( unsigned short int opacity );

    //special
    bool isCollidingAnotherObject();

};
