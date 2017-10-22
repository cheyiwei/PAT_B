#include<stdio.h>
#include<string.h>

char buffer[33];

int main(){
	int radix;
	int a1,a2;
	scanf("%d %d %d",&a1,&a2,&radix);
	int m = a1+a2;
	int i=0;
	if(m==0){
		printf("0");
	}
	while(m!=0){
		buffer[i++]='0'+ m%radix;
		m /= radix;
	}
	buffer[i] = '\0';
	int len = strlen(buffer);
	for(i=len-1;i>=0;i--){
		printf("%c",buffer[i]);
	}
} 
