/*
ID:PAT_B_1001
time@2018/2/4
author@cheyiwei
*/
#include<stdio.h>

int main(){
	int step = 0;
	int n = 0;
	scanf("%d",&n);
	while(n!=1){
		if(n%2==1)
			n = 3*n + 1;
		n/=2;
		step++;
	}
	printf("%d\n",step);
} 
