#include<stdio.h>

int score[1000];

int main(){
	int number,i;
	scanf("%d",&number);
	for(i=0;i<1000;i++){
		score[i]=0;
	}
	while(number--){
		int n;
		int num;
		int s;
		scanf("%d-%d",&n,&num);
		scanf("%d",&s);
		score[n] += s;
	}
	int max=0;
	for(i=0;i<1000;i++){
		if(score[i]>score[max]){
			max = i;
		}
	}
	printf("%d %d",max,score[max]);
} 
