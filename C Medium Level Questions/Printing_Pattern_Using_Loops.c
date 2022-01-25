#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	int row = n + (n-1);
    int i = 0;
    int t = 0;
    int num = n;
    while(i < row){
        if(i <= (n-1)){
            num = n;
            for(t=0; t<i; ++t){
                printf("%d ",num-t);
            }
            num -= t;
            
            for(t=0;t<(row-(i*2));t++){
                printf("%d ",num);
            }
            for(t=0;t<i;t++){
                printf("%d ",num+(t+1));
            }
            printf("\n");
        } else {
            num++;
            for(t=0;t<(n-num);++t){
                printf("%d ",n-t);
            }
            for(t=0;t<(row-((n-num)*2));t++){
                printf("%d ",num);
            }
            for(t=0;t<(n-num);++t){
                printf("%d ",num+(t+1));
            }
            printf("\n");
        }
        i++;
    }
    return 0;
}
