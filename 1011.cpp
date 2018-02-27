/*
ID:PAT_B_1011
time@2018/2/5
author@cheyiwei
*/

#include<cstdio>

int main(){
	int T;
	scanf("%d",&T);
	int i = 0;
	while(T--){
		i++;
		double A,B,C;
		scanf("%lf %lf %lf",&A,&B,&C);
		if(A+B>C){
			printf("Case #%d: true\n",i);
		}else{
			printf("Case #%d: false\n",i);
		}
	}
}
