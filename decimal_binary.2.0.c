#include <stdio.h>
#include <math.h>
#include <string.h>

char decimal_to_binary(int decimal)
{
    char binary[65], re_binary[65];
    int i, j, len;

    for(i = 0; ; i++){
        if(decimal % 2 == 1){
            binary[i] = '1';
            decimal = decimal / 2;
        }
        else{
            binary[i] = '0';
            decimal = decimal / 2;
        }
        if(decimal / 2 == 0){
            if(decimal % 2 == 1){
                binary[i] = '1';
            }
            else{
                binary[i] = '0';
            }
            break;
        }
    }

    len = strlen(binary);
    j = len - 1;

    for(i = 0; i < len;i++,j--){
        re_binary[j] = binary[i];
    }

    return re_binary;
}

int main ()
{
    int decimal;

    printf("Enter the decimal number:");
    scanf("%d", &decimal);

    printf("The binary number is %s", decimal_to_binary(decimal));

    return 0;
}
