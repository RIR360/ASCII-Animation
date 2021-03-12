#include <stdio.h>
#include <conio.h>
#include "drawrect.h"

int main()
{
    rect canvas = {0, 0, 20, 20};
    int i;

    while (1)
    {
        for (i = 0; i < 20; i++)
        {
            drawRect(0, 0, i, i, canvas);
            system("cls");
        }
        for (i = 0; i < 20; i++)
        {
            drawRect(0, 0, 20 - i, 20 - i, canvas);
            system("cls");
        }
    }
    getch();
    return 0;
}
