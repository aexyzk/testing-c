#include <stdio.h>
#include <stdlib.h>
#include <raylib.h>

int fail(char msg[]) {
    printf("\033[91m[FAIL] %s", msg);
    return 0;
}

int info(char msg[]) {
    printf("[INFO] %s", msg);
    return 0;
}

int warn(char msg[]) {
    printf("\033[93m[WARN] %s", msg);
    return 0;
}

int ok(char msg[]) {
    printf("\033[96m[OK] %s", msg);
    return 0;
}

int main(void) {
    const int SCREENWIDTH = 640;
    const int SCREENHEIGHT = 480;

    InitWindow(SCREENWIDTH,SCREENHEIGHT,"raylib");

    SetTargetFPS(60);

    while(!WindowShouldClose()){
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("owo", 200, 200, 20, BLUE);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
