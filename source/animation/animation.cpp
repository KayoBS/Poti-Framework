#include "./animation.hpp"

Animation::Animation( std::string spriteSheetPath, Vector2 position, Vector2 size,Vector2 tileSize, int startFrame, int endFrame, float speed, float durationLeft ) {
  this->spriteSheet = LoadTexture(spriteSheetPath.c_str());
  this->setPosition(position);
  this->setSize(size);
  this->tileSize = tileSize;

  this->startFrame = startFrame;
  this->endFrame = endFrame;
  this->framesPerRow = (this->endFrame - this->startFrame);
  this->currentFrame = this->startFrame;
  this->speed = speed;
  this->durationLeft = durationLeft;
}
Animation::~Animation() {
  UnloadTexture(this->spriteSheet);
}

//special -> PRIVATE
void Animation::animationUpdate() {
  float dt = GetFrameTime();
  this->durationLeft -= dt;

  if(this->durationLeft <= 0.0f) {
    this->durationLeft = this->speed;
    this->currentFrame++;

    if(this->currentFrame > this->endFrame) {
      //repetição
      this->currentFrame = this->startFrame;
    }
  }
}
Rectangle Animation::animationFrame( int framesPerRow ) {
  int x = (this->currentFrame % framesPerRow) * this->tileSize.x;
  int y = (this->currentFrame / framesPerRow) * this->tileSize.y;

  return (Rectangle) {
    .x = static_cast<float>(x),
    .y = static_cast<float>(y),
    .width = this->tileSize.x,
    .height = this->tileSize.y
  };
}

//special -> PUBLIC
void Animation::play() {
  this->animationUpdate();
  DrawTexturePro(this->spriteSheet, 
      this->animationFrame(this->framesPerRow),
      {this->getPosX(), this->getPosY(), this->getWidth(), this->getHeight()},
      {0, 0}, 0.0f, WHITE);
}

//TODO
//getters
//setters
