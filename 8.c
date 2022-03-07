#include <stdio.h>

int main()
{
    int ev, honap, nap;
    scanf("%d", ev);
    scanf("%d", honap);
    scanf("%d", nap);

    if (ev>0)
    {
        if(honap<=12 && honap > 0)
        {
            switch(honap)
            {
                case 1: if (nap<31){
                    printf("Jo");
                }
                case 2: if (nap<29)
                {
                    
                }
            }
        }
    }
}