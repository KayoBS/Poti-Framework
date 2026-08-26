#include <raylib.h>
#include "potifmw.hpp"

int main(void) {
  Window window(320, 320, 45, "game");
  window.init();

  while(!WindowShouldClose()) {
    window.update();
  }

  return 0;
}
