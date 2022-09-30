#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fNetprice;
    float fGrossprice;

    printf("-----------------------------------\n");
    printf("      Gross price calculator\n");
    printf("   Made by Matteo Pirchner-Gratz\n");
    printf("-----------------------------------\n\n");
    printf("Enter your net price (euros): ");
    scanf("%f", &fNetprice);
    printf("\nYou entered the sum: %.2f\n\n", fNetprice);

    fGrossprice = fNetprice / 100 *120;
    printf("The gross price (120%) is: %.2f\n\n", fGrossprice);
    printf("Bye!\n\n");

    return 0;
}
