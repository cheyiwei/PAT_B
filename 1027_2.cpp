/*
ID:PAT_B_1027 
time@2018/2/8
author@cheyiwei
*/

#include<cstdio>
#include<math.h>

int main(){
	int bottom,num;
	char c;
	scanf("%d %c",&num,&c);
	bottom = sqrt(2.0*(num+1)) - 1;
	if(bottom % 2==0) bottom -=1;
	int used = (bottom+1)*(bottom+1)/2 -1;
	for(int i = bottom;i>=1;i-=2){//µ¹Èý½Ç 
		for(int j = 0;j<(bottom-i)/2;j++) printf(" ");
		for(int j = 0;j<i;j++) printf("%c",c);
		printf("\n");
	}
	for(int i = 3;i<=bottom;i+=2){//ÕýÈý½Ç 
		for(int j = 0;j<(bottom-i)/2;j++) printf(" ");
		for(int j = 0;j<i;j++) printf("%c",c);
		printf("\n");
	}
	printf("%d\n",num - used);
	return 0;
}
