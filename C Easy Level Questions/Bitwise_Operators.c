#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
	int max_values[4]={0,0,0,0,0};
	
  	for (int i=1;i<=k;i++){
  		for(int j=i+1;j<=n;j++){
  				if((i&j)<k && max_values[0] < (i&j)){
  					max_values[0] = (i&j);
				  }
				if((i|j)<k && max_values[1] < (i|j)){
  					max_values[1] = (i|j);
				  }
				if((i^j)<k && max_values[2] < (i^j)){
  					max_values[2] = (i^j);
				  }
		 }
	  }
	printf("%d\n",max_values[0]); 
	printf("%d\n",max_values[1]); 
	printf("%d\n",max_values[2]);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
