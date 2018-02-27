/*
ID:PAT_B_1006 
time@2018/2/9
author@cheyiwei
*/

#include<cstdio>

int main(){
	int n;
	scanf("%d",&n);
	for(int i = n/100;i>0;i--) printf("B");
	for(int i = n%100 /10;i>0;i--) printf("S");
	for(int i = 1,j=n%10;i<=j;i++) printf("%d",i);
} 
