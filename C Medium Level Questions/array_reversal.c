#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

	int k = 0;
	int max = 0;
	max = num-1;
	while (k < num/2){
		swap(&arr[k],&arr[max]);
		max--;
		k++;
	}

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
