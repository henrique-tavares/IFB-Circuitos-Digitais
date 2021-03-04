#pragma once

#include "../headers/stoplight.h"
#include "../headers/keypress.h"

void (*state)();

void green_light();
void red_light();
void yellow_light();
