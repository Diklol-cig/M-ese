#include <stdio.h>

int main()
{
    int x;
    printf("kerem a szamot: ");
        scanf("%d", &x);

    if (x < 99999999)
    {
        if (x>10000000)
        {
            printf("tizmillio");
        }
        else if (x>=1000000)
        {
            printf("millio");
        }
        else if (x>=100000)
        {
            printf("szazezer");
        }
        else if (x>=10000)
        {
            printf("tizezer");
        }
        else if (x>=1000)
        {
            printf("ezer");
        }
        else if (x>=100)
        {
            printf("szaz");
        }
        else if (x>=10)
        {
            printf("tizes");
        }
        else if (x>=1)
        {
            printf("egyes");
        }
        else
        {
            printf("Nem jo bemenet");
        }
    
    }
    else{
        printf("Nem jo bemenet");
    }
}