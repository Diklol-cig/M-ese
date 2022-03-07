#include <stdio.h>

int main()
{
    int x = 18;

    if(x < 1)
    {
        puts("Meg nem jar sehova");
    }
    else if (x<=2)
    {
        puts("Bolcsi");
    }
    else if (x <= 6)
    {
        puts("ovi");
    }
    else if (x <= 14)
    {
        puts("Altsuli");
    }
    else if (x <= 18)
    {
        puts("Kozepsuli");
    }
    else if (x <= 23)
    {
        puts("Egyetem");
    }
    else
    {
        puts("Elballagott");
    }
}