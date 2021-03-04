#include "../headers/stoplight.h"

#define print_red(text) wprintf(L"\x1b[1;31m%lc\x1b[0m", text)
#define print_green(text) wprintf(L"\x1b[1;32m%lc\x1b[0m", text)
#define print_yellow(text) wprintf(L"\x1b[1;33m%lc\x1b[0m", text)
#define print_gray(text) wprintf(L"\x1b[1;30m%lc\x1b[0m", text)

enum BoxDrawing
{
    HORIZONTAL = 0x2500,
    VERTICAL = 0x2502,
    TOP_RIGHT = 0x2510,
    TOP_LEFT = 0x250C,
    BOTTOM_RIGHT = 0x2518,
    BOTTOM_LEFT = 0x2514,
    FILL = 0x2591,
    HORIZONTAL_DOWN = 0x252C,
    HORIZONTAL_UP = 0x2534
};

void stop_light(Color color)
{
    // ----------------------------------------|Top|---------------------------------------- //
    wprintf(L"%lc", TOP_LEFT);
    for (int i = 0; i < 8; i++)
    {
        if ((i + 1) % 3 == 0)
        {
            wprintf(L"%lc", HORIZONTAL_DOWN);
        }
        else
        {
            wprintf(L"%lc", HORIZONTAL);
        }
    }
    wprintf(L"%lc\n", TOP_RIGHT);

    // ----------------------------------------|Red|---------------------------------------- //
    wprintf(L"%lc", VERTICAL);
    if (color == RED)
    {
        print_red(FILL);
        print_red(FILL);
    }
    else
    {
        print_gray(FILL);
        print_gray(FILL);
    }

    // --------------------------------------|Yellow|--------------------------------------- //
    wprintf(L"%lc", VERTICAL);
    if (color == YELLOW)
    {
        print_yellow(FILL);
        print_yellow(FILL);
    }
    else
    {
        print_gray(FILL);
        print_gray(FILL);
    }

    // ---------------------------------------|Green|--------------------------------------- //
    wprintf(L"%lc", VERTICAL);
    if (color == GREEN)
    {
        print_green(FILL);
        print_green(FILL);
    }
    else
    {
        print_gray(FILL);
        print_gray(FILL);
    }
    wprintf(L"%lc\n", VERTICAL);

    // --------------------------------------|Bottom|--------------------------------------- //
    wprintf(L"%lc", BOTTOM_LEFT);
    for (int i = 0; i < 8; i++)
    {
        if ((i + 1) % 3 == 0)
        {
            wprintf(L"%lc", HORIZONTAL_UP);
        }
        else
        {
            wprintf(L"%lc", HORIZONTAL);
        }
    }
    wprintf(L"%lc\n", BOTTOM_RIGHT);
}