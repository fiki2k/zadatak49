// Program ce pretvorit binarni u oktalni broj pomocu funkcije.

#include <stdio.h>
#include <math.h>
//This function converts binary number to octal number
int binarniUoktalni(long binarni)
{
    int oktalni = 0, decimalni = 0, i = 0;

    /* Ova funkcija pretvara binarni
	u decimalni broj .
     */
    while(binarni != 0)
    {
        decimalni = decimalni + (binarni%10) * pow(2,i);
        i++;
        binarni = binarni / 10;
    }

    //i je reinicijaliziran
    i = 1;

    /* Ova funkcija pretvara 
    decimalni u oktalni.
     */
    while (decimalni != 0)
    {
        oktalni = oktalni + (decimalni % 8) * i;
        decimalni = decimalni / 8;
        i = i * 10;
    }

    //Vracanje oktalnog brja kojeg smo dobili iz funkcije
    return oktalni;
}
int main()
{
    long binarni;

    printf("Unesi binarni broj: ");
    scanf("%ld", &binarni);

    // Pozivanje funkcije
    printf("Oktalna vrijednost je: %d", binarniUoktalni(binarni));

    return 0;
}
