#include<stdio.h>

int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	int judge[M];
	int i = 0;
	for(i=0;i<M;i++){
		scanf("%d",&judge[i]);
	}
	int right[M];
	for(i=0;i<M;i++){
		scanf("%d",&right[i]);
	}
	while(N--){
		int sum = 0;
		int now = 0;
		for(i=0;i<M;i++){
			scanf("%d",&now);
			if(now==right[i]){
				sum += judge[i];
			}
		}
		printf("%d\n",sum);
	}
} 
