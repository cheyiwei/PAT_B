#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b){
	return *(int*)a-*(int*)b;
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
	
	int result = 0;//result存储结果 
	int last;
	int first;
 
	for(first = 0,last = 0;last<n;first++){
		//1l是防止溢出 
		while(last < n && a[last] <= (1L * a[first] * p)){
			last++;
		}
		//每次循环结束后,都会满足 [first，last-1]为一个符合条件的集合,此区间长度为last-result
		//下次循环，增大a[first]，寻找下一个a[last] 
		if(result < last - first){
			result = last - first;
		}
	}
	printf("%d",result);
	return 0;
} 
