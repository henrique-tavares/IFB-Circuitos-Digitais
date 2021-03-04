#pragma once

#include <pthread.h>
#include <stdlib.h>
#include <stdbool.h>
#include <wchar.h>

pthread_t keypress_id;  // keypress thread
volatile wint_t key;    // key pressed
volatile bool pb;       // Pedestrian Button
volatile bool qb;       // Quit Program Buttom
void *keypress(void *); // keypress listener