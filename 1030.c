#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b){
	int *p = (int *)a;
	int *q = (int *)b;
	if(*p>*q){
		return 1;
	}else if(*p == *q){
		return 0;
	}else{
		return -1;
	}
}

int main(){
	int n,p;
	scanf("%d %d",&n,&p);
	int a[n];
	int i = 0;
	for(i=0;i<n;i++){					
		scanf("%d",&a[i]);
	}
	
	qsort(a,n,sizeof(int),compare);	
	
	int result = 0;
	int last;
	int first;
	for(first = 0,last = 0;last<n;first++){
		while(last < n && a[last] <= (1L * a[first] * p)){
			last++;
		}
		if(result < last - first){
			result = last - first;
		}
	}
	printf("%d",result);
	return 0;
} 
