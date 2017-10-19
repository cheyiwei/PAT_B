#include<stdio.h>
int main(){
	int times;
	int num = 1;
	scanf("%d",&times);
	while(times--){
		long int a,b,c;
		scanf("%ld %ld %ld",&a,&b,&c);
		if(a+b>c){
			printf("Case #%d: true\n",num++);
		}else{
			printf("Case #%d: false\n",num++);
		}
	}
} 
