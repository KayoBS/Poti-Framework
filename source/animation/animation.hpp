#pragma once

#include <raylib.h>
#include <string>
#include "../layoutObject/layoutObject.hpp"

class Animation : LayoutObject {
  private:
    Texture2D spriteSheet;

    Vector2 tileSize;

    int framesPerRow;

    int startFrame;
    int endFrame;
    int currentFrame;

    float speed;
    float durationLeft;

    //bool pingPong
    //bool looping

    //special
    void animationUpdate();
    Rectangle animationFrame( int framesPerRow );

  public:
    Animation( std::string spriteSheetPath, Vector2 position, Vector2 size, Vector2 tileSize, int startFrame, int endFrame, float speed, float durationLeft );
    ~Animation();

    //TODO
    //getters
    //setters

    //special
    void play();
};
