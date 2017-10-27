#include<stdio.h>

int main(){
	int n;
	char c;
	scanf("%d %c",&n,&c);
	int li = n/2 - 2;
	if(n%2==1)
		li+=1;
	int i=0,j=0;
	for(i=0;i<n;i++){
		printf("%c",c);
	}
	for(i=0;i<li;i++){
		printf("\n%c",c);
		for(j=0;j<n-2;j++){
			printf(" ");
		}
		printf("%c",c);
	}
	printf("\n");
	if(n>1){
		for(i=0;i<n;i++){
		printf("%c",c);
		}
	}
	
} 
