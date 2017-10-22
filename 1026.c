#include<stdio.h>
#include<time.h>

#define CLK 100

int main(){
	int c1,c2;
	int min = 0,hour = 0;
	double sec = 0;
	scanf("%d %d",&c1,&c2);
	sec = c2-c1;
	sec/=CLK;
	while(sec>60){
		sec -= 60;
		min ++;
	}
	if(sec>=59.5){
		sec = 0;
		min ++;
	}
	while(min>60){
		min-=60;
		hour++;
	}
	printf("%02d:%02d:%02.0lf",hour,min,sec);
} 
