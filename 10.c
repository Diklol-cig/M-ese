#include <stdio.h>

int main()
{
    int x = 10;

    if (x < 8)
    {
        printf("Tel");
    }
    else if (x < 15)
    {
        printf("Tavasz vagy ösz");
    }
    else
    {
        puts("Nyar");
    }

    puts("Vege");
}