#include "Tower.h"
#include "raylib.h"

Tower::Tower(Vector2 position, bool isPlaced) {
  this->position = position;
  this->isPlaced = isPlaced;
}

void Tower::Draw() { DrawCircleV(position, 35.0f, DARKBLUE); }

void Tower::Place(Vector2 newPosition) {
  if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && !isPlaced) {
    position = newPosition;
    isPlaced = true;
  }
}
