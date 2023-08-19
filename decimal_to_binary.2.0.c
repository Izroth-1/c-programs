#include <stdio.h>
#include <math.h>
#include <string.h>

int main ()
{
    int binary[65], decimal, i;

    printf("Enter a decimal number:");
    scanf("%d", &decimal);

    for(i = 0; decimal > 0; i++){
        if(decimal == 0){
            binary[i] = 0;
            break;
        }
        binary[i] = decimal % 2;
        decimal = decimal / 2;
    }

    printf("The binary number is ");

    for(i = i - 1; i >= 0;i--){
        printf("%d", binary[i]);
    }

    printf("\n");

    return 0;
}

