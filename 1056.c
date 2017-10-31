#include<stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	int sum = 0;
	int a,i;
	for(i=0;i<N;i++){
		scanf("%d",&a);
		sum += a*(N-1);
		sum += a*10*(N-1);
	}
	printf("%d",sum);
}
