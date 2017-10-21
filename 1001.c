#include<stdio.h>


int main(){
	int times = 0;
	int n;
	scanf("%d",&n);
	while(n != 1){
		if(n % 2 == 0){
			n /= 2;
			times ++;
		}else{
			n *= 3;
			n += 1;
			n /= 2;
			times ++;
		}
	}
	printf("%d",times);
}
