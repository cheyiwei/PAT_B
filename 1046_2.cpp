/*
ID:PAT_B_1046
time@2018/2/5
author@cheyiwei
*/
#include<cstdio>

int main(){
	int times = 0;
	scanf("%d",&times);
	int win_1=0,win_2=0;
	while(times--){
		int shout_1,shout_2,sum_1,sum_2;
		scanf("%d %d %d %d",&shout_1,&sum_1,&shout_2,&sum_2);
		if(sum_1 == shout_1 + shout_2 && sum_2 != shout_1 + shout_2){
			win_1++;
		}
		if(sum_2 == shout_1 + shout_2 && sum_1 != shout_1 + shout_2){
			win_2++;
		}
	}
	printf("%d %d",win_2,win_1);
}
