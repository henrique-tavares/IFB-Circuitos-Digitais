#include "../headers/estados.h"

int main()
{
    setlocale(LC_CTYPE, "");

    pthread_create(&keypress_id, NULL, keypress, NULL);

    state = green_light;
    for (;;)
    {
        system("clear||cls");
        (*state)();
    }

    return 0;
}