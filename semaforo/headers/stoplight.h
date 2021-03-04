#pragma once

#include <wchar.h>
#include <locale.h>

typedef enum Color
{
    RED,
    YELLOW,
    GREEN
} Color;

void stop_light(Color);