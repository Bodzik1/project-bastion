#include <raylib.h>

int main() {
  constexpr int screenWidth(1280);
  constexpr int screenHeight(720);

  InitWindow(screenWidth, screenHeight, "Project Bastion");

  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(RAYWHITE);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
