#include<stdio.h>
#include<stdlib.h>

int compare(const void * p,const void * q){
	return *(int *)p - *(int *)q;
}

int main(){
	int fri[37]={0};
	int a[37]={0};
	int n=0,i=0;
	int num = 0;
	scanf("%d",&n);
	while(n--){
		int x;
		scanf("%d",&x);
		int m=0;
		while(x!=0){
			m += x%10;
			x /= 10;
		}
		fri[m]++;
		if(fri[m] == 1){
			a[num++]=m;
		}
	}
	qsort(a,num,sizeof(int),compare);
	if(num>0)
		printf("%d\n",num);
	else
		printf("0\n");
	for(i=0;i<num;i++){
		printf("%d",a[i]);
		if(i!=num-1){
			printf(" ");
		}
	}
	return 0;
}
