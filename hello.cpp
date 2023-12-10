# include <cstdio>
#include "raylib.h"

int main()
{
  const int windowWidth{500};
  const int windowHeight{500};
  InitWindow(windowWidth, windowHeight, "Window");
  const int width(100);
  const int height(100);

  int posY{windowHeight - height};
  int velocity{-10};

  SetTargetFPS(60);

  while (!WindowShouldClose())
  {
    BeginDrawing();
    ClearBackground(WHITE);

    posY += velocity;

    DrawRectangle(windowWidth/2, posY, width, height, BLACK);

    EndDrawing();
  }
  CloseWindow();
}
