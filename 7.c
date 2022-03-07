#include <stdio.h>


int vizsgalat(const int n, char tomb[], char x)
{
    for (int i = 0; i<meret; i++)
    {
        if (x ==tomb[i])
        {
            return 1;
        }
        return 0;
    }
}

int main()
{

    //éöüóőúáűí
    char tomb[]={ö, ü, ó, ő, ú, á, ű, í, é};
    int meret = 9;
    
    char x;
    scanf("%c", &x);

    printf("Jo-e?", vizsgalat(meret, tomb, x));

}