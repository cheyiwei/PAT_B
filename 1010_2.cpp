/*
ID:PAT_B_1010
time@2018/2/6
author@cheyiwei
*/

#include<cstdio>

int main(){
	int a,b;
	int count = 0;
	int num[1010]={0};
	while(scanf("%d %d",&a,&b)!=EOF){
		num[b] = a;
	}
	num[0]=0;
	for(int i=0;i<1000;i++){
		num[i] = num[i+1] * (i+1);
		num[i+1] = 0;
		if(num[i]!=0) count++;
	}
	if(count == 0) printf("0 0");
	else{
		for(int i = 999;i>=0;i--){
			if(num[i]!=0){
				printf("%d %d",num[i],i);
				count--;
				if(count!=0) printf(" ");
			}
		}
	}
	return 0;
}
