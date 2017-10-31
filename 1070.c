#include<stdio.h>

int main(){
	int t,k;
	scanf("%d %d",&t,&k);
	while(k--){
		int n1,n2;
		int b,t1;
		if(t<=0){
			printf("Game Over.");
			break;
		}
		scanf("%d %d %d %d",&n1,&b,&t1,&n2);
		if(t1>t){
			printf("Not enough tokens.  Total = %d.",t);
		}else{
			if(n2>n1){
				if(b == 1){
					t += t1;
					printf("Win %d!  Total = %d.",t1,t);
				}else{
					t -= t1;
					printf("Lose %d.  Total = %d.",t1,t);
				}
			}else{
				if(n2<n1&&b==0){
					t += t1;
					printf("Win %d!  Total = %d.",t1,t);
				}else{
					t -= t1;
					printf("Lose %d.  Total = %d.",t1,t);
				}
			}
		}
		printf("\n");
	}
} 
