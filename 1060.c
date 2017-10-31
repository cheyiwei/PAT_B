#include<stdio.h>
#include<stdlib.h>

int comp(const void* p,const void* q){
	return *(int *)q - *(int *)p;
}

int main(){
	int N;
	scanf("%d",&N);
	int a[N];
	int i = 0;
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	qsort(a,N,sizeof(int),comp);
	int e=0;
	for(i=0;i<N;i++){
		if(a[i]>i+1){	//公里数大于天数，更新e 
			e++;
		}
	}
	printf("%d",e);			
}
