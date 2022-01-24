#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n1;
    int n2;
    float f1;
    float f2;
    int dif;
    float f_dif;
    scanf("%d %d",&n1,&n2);
    scanf("%f %f",&f1,&f2);
    dif=n1-n2;
    printf("%d %d\n",n1+n2,dif);
    f_dif=f1-f2;
    printf("%.2f %.2f",f1+f2,f_dif);
    return 0;
}

