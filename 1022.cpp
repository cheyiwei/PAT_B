/*
ID:PAT_B_1022
time@2018/2/5
author@cheyiwei
*/

#include<cstdio>
#include<cstring>

int main(){
	int a,b,d;
	scanf("%d %d %d",&a,&b,&d);
	char zum[40] = {'\0'};
	int num=0,c = a+b;
	if(c==0){
		zum[0]='0';
	}
	while(c!=0){
		zum[num++]= c%d + '0';
		c/=d;
	}
	int len = strlen(zum);
	for(int i = len - 1;i>=0;i--){
		printf("%c",zum[i]);
	}
	printf("\n");
	return 0;
}
