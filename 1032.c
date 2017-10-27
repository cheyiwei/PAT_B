#include<stdio.h>
#include<stdlib.h>

int sum[100000];

int main(){
	int n;
	scanf("%d",&n);
	int max = 1;
	while(n--){
		int num,score;
		scanf("%d",&num);
		scanf("%d",&score);
		sum[num-1] += score;
		if(sum[max-1]<sum[num-1]){
			max = num;
		}
	}
	printf("%d %d",max,sum[max-1]);
} 
