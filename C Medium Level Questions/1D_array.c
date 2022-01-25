#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n;
    scanf("%d",&n);
    int *int_array;
    int_array = (int *)malloc(sizeof(int) * n+1);
    if(!int_array){
    	printf("memory inadequate");
        return(-1);
    }
	char format[4001];
	char *temp;
	temp = (char *)calloc(4001,sizeof(char));
	scanf("\n");
    scanf("%[^\n]%*c",&format);
    int i = 0;
    int j = 0;
    int num = 0;
    int sum = 0;
    int t = 0;
    while(format[i] != '\0'){
    	if(format[i] != ' '){
    		temp[j] = format[i];
    		j++;
		} else if (format[i] == ' '){
			//printf("%s\n",temp);
			int_array[t] = atoi(temp);
			memset(temp,0,sizeof(temp));
			sum += int_array[t];
			t++;
			j=0;
		}
		i++;
	}
	num = atoi(temp);
	sum += num;
	printf("%d\n",sum);
	//printf("%d\n",*int_array);
    return 0;
}
