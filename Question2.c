#include <stdio.h>
int main(void)
{
    int power;
    char Colour;

    printf("Input whether signal is On or Off [On = 1/Off = 0]: ");
    scanf("%d", &power);
    printf("Enter the Colour code [Red(R)/Yellow(Y)/Green(G)]: ");
    scanf(" %c", &Colour);

    if (power == 0)
    {
        printf("Signal Off\n");
    }
    else if (power == 1)
    {
        if (Colour == 'R')
        {
            printf("Stop!!!\n");
        }
        else if (Colour == 'Y')
        {
            printf("Caution\n");
        }
        else if (Colour == 'G')
        {
            printf("Go!!!\n");
        }
        else
        {
            printf("Invalid Colour Code\n");
        }
    }
    else
    {
        printf("Invalid Number Entered\n");
    }

    return 0;
}