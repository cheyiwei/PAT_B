#include<stdio.h>

int main(){
	int i = 0;
	int a,b;
	while((scanf("%d%d",&a,&b))!=EOF){
		a = a*b;
		if(a){
			if(i){
				printf(" ");
			}
			else
				i = 1;
			printf("%d %d",a,b-1);
		}
		if(!i)
			printf("0 0");
	}
} 
