#include <stdio.h>

int main()
{
    int x;
    printf("Kerem a szamot: ");
        scanf("%d", &x);

    switch(x)
    {
        case 0: printf("Nulla"); break;
        case 1: printf("Egy"); break;
        case 2: printf("Ketto");break;
        case 3: printf("Harom");break;
        default :("Nem jo szam");
    }
    return 0; 
}