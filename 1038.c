#include<stdio.h>
int score[101];

int main(){
	int n;
	int s;
	for(n=0;n<101;n++){
		score[n] = 0;
	}
	scanf("%d",&n);
	while(n--){
		scanf("%d",&s);
		score[s]++;
	}
	scanf("%d",&s);
	int find;
	while(s--){
		scanf("%d",&find);
		printf("%d",score[find]);
		if(s!=0){
			printf(" ");
		}
	}
} 
