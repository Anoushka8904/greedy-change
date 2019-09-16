#include <stdio.h>

int main(void)
{

    float change;
    int pennies, a, A, b, B, c, C;

    //loop prevents negative value from being accepted
    do
    {
        printf("How much change do you owe? (in dollars)?");
        scanf("%f", &change);
    }
    while(change<0);

    pennies = change*100; //changes dollars to pennies

    a = pennies / 25; //calculates no. of 25c coins needed
    A = pennies % 25;

    b = A / 10; //calculates no. of 10c coins needed
    B = A % 10;

    c = B / 5; //calculates no. of 5c coins needed
    C = B % 5; //remainder of int division by 5 is equal to no. of 1c coins needed

    printf("%d\n", a+b+c+C); //calculates and outputs minimum no. of coins

}