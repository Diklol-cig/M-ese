#include <stdio.h>

int main()
{
    int x;
    puts("Kerem a szamot");
    scanf("%d",&x);

    if (x % 5 == 0 && x % 7 == 0)
    {
        puts ("Jo szam");
    }
    else
    {
        puts("Nem jo szam");
    }
}