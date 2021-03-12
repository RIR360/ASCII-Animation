#include <stdio.h>
#include <conio.h>
#include "drawrect.h"

int main()
{
    rect canvas = {0, 0, 20, 20};
    int i;

    while (1)
    {
        for (i = 0; i < 15; i++)
        {
            drawRect(i, 0, 5, 5, canvas);
            system("cls");
        }
        for (i = 0; i < 15; i++)
        {
            drawRect(20 - 6, i, 5, 5, canvas);
            system("cls");
        }
        for (i = 0; i < 15; i++)
        {
            drawRect(20 - 6 - i, 20 - 6, 5, 5, canvas);
            system("cls");
        }
        for (i = 0; i < 15; i++)
        {
            drawRect(0, 20 - 6 - i, 5, 5, canvas);
            system("cls");
        }
    }
    getch();
    return 0;
}
