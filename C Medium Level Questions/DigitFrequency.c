#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	char a[1000];
	int counts[10] = {0,0,0,0,0,0,0,0,0,0};
	int i = 0;	
	scanf("%[^\n]%*c",&a);
   	while(a[i] != '\0')
   	{
   		if(a[i] <= '9' && a[i] >= '0'){
   			int j = 0;
			while(j < 10){
				if(a[i] == (j + '0')) { counts[j]+=1;}
				j++;
			}
		}
		i++;		
	}
	
	i = 0;
	while(i < 10)
	{
		printf("%i ",counts[i]);
		i++;
	}
    return 0;
}

