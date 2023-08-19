#include <stdio.h>

int main ()
{
    int namta[10][10],i,j;

    int even_count = 0;
    int uneven_count = 0;
    int total_count = 0;

    for(i = 0;i < 10;i++){
        for(j= 0;j < 10;j++){
            namta[i][j] = (i + 1) * (j + 1);
            printf("%d x %d = %d\n",i + 1,j + 1,namta[i][j]);

            if(namta[i][j] % 2 == 0){
                even_count++;
            }
            else{
                uneven_count++;
            }

            total_count = total_count + namta[i][j];
        }
    }

    printf("There is %d even number and %d uneven number in namta\n",even_count,uneven_count);
    printf("The total summition of the namta is %d\n",total_count);

    return 0;
}
