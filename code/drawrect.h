#define  fg "X "
#define  bg ". "

typedef struct rect { int x, y, w, h; } rect;

void drawRect(int x, int y, int w, int h, rect canvas)
{
    int i, j;
    rect box = {x, y, w, h};
    for (i = 0; i < canvas.h; i++)
    {
        for (j = 0; j < canvas.w; j++)
        {
            // printing characters inside defined area.
            if (i >= box.y && i <= box.y + box.h && j >= box.x && j <= box.x + box.w)
            {
                printf("%s", fg);
            }
            else
            {
                printf("%s", bg);
            }
        }
        printf("\n");
    }
}
