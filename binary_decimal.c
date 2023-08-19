#include <stdio.h>
#include <string.h>
#include <math.h>

int main ()
{
    char binary[65];
    int len, decimal, power, i;

    printf("Enter a binary number:");
    scanf("%s", binary);

    len = strlen(binary);
    decimal = 0;
    power = len -1;

    for(i = 0; i < len; i++){
        decimal =  decimal + (binary[i] - '0') * pow(2, power);
        power--;
    }

    printf("Decimal value is %d\n", decimal);

    return 0;
}

