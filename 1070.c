#include<stdio.h>
#include<stdlib.h>

int comp(const void* p,const void *q){
	double *a = (double *)p;
	double *b = (double *)q;
	if(*a > *b){
		return 1;
	}else{
		return -1;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	double len[n];
	int i = 0;
	for(i=0;i<n;i++){
		scanf("%lf",&len[i]);
	}
	qsort(len,n,sizeof(double),comp);
	double length = len[0];
	for(i=1;i<n;i++){
		length=(length+len[i])/2; 
	}
	printf("%d",(int)length);
} 
