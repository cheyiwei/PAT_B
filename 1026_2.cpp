/*
ID:PAT_B_1026
time@2018/2/5
author@cheyiwei
*/
#include<cstdio>

int main(){
	int t1,t2;
	scanf("%d %d",&t1,&t2);
	int sec = (t2-t1)/100.0 + 0.5;
	int min = sec/60;
	int hour = min/60;
	sec%=60;
	min%=60;
	printf("%02d:%02d:%02d",hour,min,sec);
}
