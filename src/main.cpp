#include "Tower.h"
#include <raylib.h>

int main() {
  constexpr int screenWidth{1280};
  constexpr int screenHeight{720};

  InitWindow(screenWidth, screenHeight, "Project Bastion");

  SetTargetFPS(60);

  while (!WindowShouldClose()) {

    Tower tower{{400.0f, 300.0f}};

    BeginDrawing();

    ClearBackground(RAYWHITE);

    tower.Draw();

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
