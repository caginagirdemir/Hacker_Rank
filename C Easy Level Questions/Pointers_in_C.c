#include <stdio.h>

void update(int *a,int *b) {
	int a_temp = *a;
	int b_temp = *b;
	int temp = 0;
    *a = *a + *b;
    temp = a_temp - b_temp;
    if(temp < 0){
    	*b = b_temp - a_temp;
	} else{
		*b = a_temp - b_temp;
	}
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d\n%d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
