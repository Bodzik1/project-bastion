#include "Tower.h"
#include "raylib.h"

Tower::Tower(Vector2 position) { this->position = position; }

void Tower::Draw() { DrawCircleV(position, 35.0f, DARKBLUE); }
