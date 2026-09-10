#pragma once

#include <raylib.h>

class Tower {
private:
  Vector2 position;
  bool isPlaced;

public:
  Tower(Vector2 position, bool isPlaced);
  void Draw();
  void Place(Vector2 position);
};
