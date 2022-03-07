#include <stdio.h>

int main()
{
    int x;
    puts("Kerem a szamot");
    scanf("%d",&x);

    if (x % 5 == 0 || x % 7 == 0)
    {
        if (x % 7 == 0 && x % 5 == 0){
        puts ("Jo szam");
        }
        else if (x % 5 == 0)
        {
            puts("Csak 5-el oszthato");
        }
        else
        {
            puts("Csak 7-el oszthato");
        }
    }
    else
    {
        puts("Nem jo szam");
    }
}