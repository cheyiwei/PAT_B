/*
ID:PAT_B_1032
time@2018/2/4
author@cheyiwei
*/

#include<stdio.h>

int main(){
	int N = 0;
	scanf("%d",&N);
	int score[N] = {0};
	int max_index = 0;
	while(N--){
		int num,sco;
		scanf("%d %d",&num,&sco);
		score[num] += sco;
		if(score[max_index] < score[num]){
			max_index = num;
		}
	}
	printf("%d %d",max_index,score[max_index]);
}
