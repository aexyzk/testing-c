#include <stdio.h>
#include <stdlib.h>

#include <raylib.h>
#include <raymath.h>

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

const int SCREENWIDTH = 640;
const int SCREENHEIGHT = 480;

int main(void) {

    SetTargetFPS(60);
    InitWindow(SCREENWIDTH,SCREENHEIGHT,"raylib");

    Vector2 textPos = {0,0};
    Vector2 dir = {1,1};

    while(!WindowShouldClose()){
        textPos.x += 1 * dir.x;
	textPos.y += 1 * dir.y;

	if (textPos.x >= SCREENWIDTH || textPos.x <= 0) {
            dir.x * -1;
	}

        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("owo", textPos.x, textPos.y, 20, BLUE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
