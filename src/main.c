// Raylib Template C (C17 64 bits)
//
// MIT License - Copyright (C) 2022 Fredy Rogez (FredMakesGames.com)
// This file is subject to the terms and conditions defined in
// file "LICENSE", which is part of this source code package.

#include "raylib.h"
#include "game.h"

int main(int argc, char *argv[])
{
    const int screenWidth = 640;
    const int screenHeight = 480;

    InitWindow(screenWidth, screenHeight, "Raylib Template");

    SetTargetFPS(60);

    // Game Loop
    while (!WindowShouldClose())
    {
        // Update

        // Draw
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText(IT_WORKS, 140, 200, 64, RED);

        EndDrawing();
    }
    
    CloseWindow();   

    return 0;
}
