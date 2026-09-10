#include "Tower.h"
#include <raylib.h>

int main() {
  constexpr int screenWidth(1280);
  constexpr int screenHeight{720};

  Vector2 Position{400.0f, 300.0f};

  bool isPlaced{false};

  InitWindow(screenWidth, screenHeight, "Project Bastion");

  SetTargetFPS(60);

  Tower tower{Position, isPlaced};

  while (!WindowShouldClose()) {

    tower.Place(GetMousePosition());

    BeginDrawing();

    ClearBackground(RAYWHITE);

    tower.Draw();

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
