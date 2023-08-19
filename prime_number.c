#include <stdio.h>
#include <math.h>

#define size 40
char ara[size];

void print_ara()
{
	int i;

	for(i = 2;i < size;i++){
		printf("%4c", ara[i]);
	}
	printf("\n");
	for(i = 2;i < size;i++){
		printf("----");
	}
	printf("\n");
	for(i = 2;i < size;i++){
		printf("%4d", i);
	}
	printf("\n\n\n");
}

void sieve()
{
	int i,j = 2,root,m;

	print_ara();

	root = sqrt(size);

	for(i = 2;i < size;i++){
		ara[i] = 'p';
	}
	for(i = 2;i < root;i++){
        m = j;
		for(;;j++){
			m = m + i;
			if(m <= size){
                ara[m] = 'n';
            }
            else{
                break;
            }
		}
	}

	print_ara();
}

int main()
{
	sieve();

	return 0;
}
