#include "../headers/keypress.h"

void *keypress(void *arg)
{
    (void)arg;

    for (;;)
    {
        key = getwchar();

        if (key == L' ')
        {
            pb = true;
        }
        else if (key == L'q')
        {
            qb = true;
        }
    }
}