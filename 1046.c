#include<stdio.h>
int main(){
	int a=0,b=0;//���ҺȾƵĴ���
	int n;
	scanf("%d",&n);
	while(n--){
		int c,d,x,y;
		scanf("%d %d %d %d",&c,&d,&x,&y);
		int m = c+x;
		if(d == m && y != m){
			b++;
		}else if(d != m && y == m){
			a++;
		}
	}
	printf("%d %d",a,b);
} 
