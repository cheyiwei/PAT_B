/*
ID:PAT_B_1016
time@2018/2/5
author@cheyiwei
*/

#include<cstdio>

int main(){
	int a,b;
	int P_a = 0,P_b = 0;
	int d_a = 0,d_b = 0;
	scanf("%d %d %d %d",&a,&d_a,&b,&d_b);
	while(a!=0){
		if(a%10==d_a){
			P_a *=10;
			P_a += d_a;
		}
		a/=10;
	}
	while(b!=0){
		if(b%10==d_b){
			P_b *=10;
			P_b += d_b;
		}
		b/=10;
	}
	printf("%d",P_a+P_b);
}
