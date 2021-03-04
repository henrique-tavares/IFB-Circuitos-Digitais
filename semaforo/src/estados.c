#include <time.h>
#include "../headers/estados.h"

void green_light()
{
    time_t start;
    time_t end;
    int duration = 64;

    time(&start);

    pb = false;
    wprintf(L"Pressione 'q' seguido de 'ENTER' para sair do programa a qualquer momento\n");
    wprintf(L"Pressione 'SPACE' seguido de 'ENTER' para simular um botão de pedestre\n");
    stop_light(GREEN);

    do
    {
        if (qb)
        {
            pthread_cancel(keypress_id);
            exit(0);
        }
        if (pb)
        {
            break;
        }

        time(&end);

    } while ((int)difftime(end, start) < duration);

    state = yellow_light;
}

void yellow_light()
{
    time_t start;
    time_t end;
    int duration = 8;

    time(&start);

    if (pb)
    {
        wprintf(L"Pressione 'q' seguido de 'ENTER' para sair do programa a qualquer momento\n");
        wprintf(L"O botão de pedestres foi acionado...\n");
    }
    else
    {
        wprintf(L"Pressione 'q' seguido de 'ENTER' para sair do programa a qualquer momento\n\n");
    }
    stop_light(YELLOW);

    do
    {
        if (qb)
        {
            pthread_cancel(keypress_id);
            exit(0);
        }

        time(&end);

    } while ((int)difftime(end, start) < duration);

    state = red_light;
}

void red_light()
{
    time_t start;
    time_t end;
    int duration = 64;

    time(&start);

    wprintf(L"Pressione 'q' seguido de 'ENTER' para sair do programa a qualquer momento\n\n");
    stop_light(RED);

    do
    {
        if (qb)
        {
            pthread_cancel(keypress_id);
            exit(0);
        }

        time(&end);

    } while ((int)difftime(end, start) < duration);

    state = green_light;
}