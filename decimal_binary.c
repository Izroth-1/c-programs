#include <stdio.h>
#include <string.h>
#include <math.h>

int main ()
{
    int decimal, power, i, n;
    char binary[65];

    printf("Enter a decimal number:");
    scanf("%d", &decimal);

    for(power = 0; pow(2, power) <= decimal; power++);
    power = power - 1;
    n = power;

    for(i = 0; i < power + 1; i++, n--){
        if(decimal - pow(2, n) >= 0){
            decimal = decimal - pow(2, n);
            binary[i] = '1';
        }
        else{
            binary[i] = '0';
        }
    }

    printf("The binary number is %s", binary);

    return 0;
}

