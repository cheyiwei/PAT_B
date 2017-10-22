#include<stdio.h>

int main(){
	int a[10]={0,0,0,0,0,0,0,0,0,0};
	int num,i;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	int flag = 0;
	for(i=1;i<10;i++){
		if(a[i]>0){
			a[i]--;
			printf("%d",i);
			break;
		}
	}
	for(i=0;i<10;i++){
		while(a[i]>0){
			a[i]--;
			printf("%d",i);
		}
	}
}
