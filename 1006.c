#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	int pos_a,pos_b,pos_c;	//µ±Ç°Î»
	pos_a = num%10;
	num /= 10;
	pos_b = num%10;
	num /= 10;
	pos_c = num%10;
	int i = 0;
	for(i=0;i<pos_c;i++){
		printf("B");
	}
	for(i=0;i<pos_b;i++){
		printf("S");
	}
	for(i=1;i<=pos_a;i++){
		printf("%d",i);
	}
} 
