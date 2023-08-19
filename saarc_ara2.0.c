#include <stdio.h>
#include <string.h>

int main ()
{
    char saarc[7][100] = {"Bangldesh", "India", "Pakisthan", "Sri Lankha", "Nepal", "Bhutan", "Maldievs"};

    int row, col, str_lenth;

    for(row = 0;row < 7;row++){
        str_lenth = strlen(saarc[row]);
        for(col = 0;col < str_lenth;col++){
            printf("(%d, %d) = %c\n", row, col, saarc[row][col]);
        }
    }

    return 0;
}

