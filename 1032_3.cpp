/*
ID:PAT_B_1032
time@2018/2/7
author@cheyiwei
*/

#include<cstdio>

int main(){
	int N;
	scanf("%d",&N);
	int max_score = 0;
	int score[N] = {0};
	while(N--){
		int k = 0,k_score=0;
		scanf("%d %d",&k,&k_score);
		score[k] += k_score;
		if(score[k] > score[max_score]){
			max_score = k;
		}
	}
	printf("%d %d",max_score,score[max_score]);
	return 0;
}
