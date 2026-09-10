#pragma once

#include <raylib.h>

class Tower {
private:
  Vector2 position;

public:
  Tower(Vector2 position);
  void Draw();
};
