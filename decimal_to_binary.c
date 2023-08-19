#include <stdio.h>
#include <math.h>
#include <string.h>

int main ()
{
    int decimal;
    char binary[65], re_binary[65];
    int i, j, len;

    printf("Enter the decimal number:");
    scanf("%d", &decimal);

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

    printf("The binary number is %s", re_binary);

    return 0;
}

