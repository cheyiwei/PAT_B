#include<stdio.h>
#include<stdlib.h>

int comp(const void* p,const void *q){
	return *(int *)p - *(int *)q;  
}

int id[100000]={0};		//id存储对应下标的夫/妻 
int go[100000]={0};		//go存储当前标号的人是否去 
int maybe[10000]={0};	//maybe为去的人的序号 
int is[10000]={0}; 		//is存储单身的人 

int main(){
	int N;
	scanf("%d",&N);
	while(N--){
		int a,b;
		scanf("%d",&a);
		scanf("%d",&id[a]);
		id[id[a]]=a; 
	}
	int M;
	scanf("%d",&M);
	int i,j=0,num;
	for(i=0;i<M;i++){
		scanf("%d",&j);
		go[j] = 1;
		maybe[i]=j;
	}
	num = 0;
	for(i=0;i<M;i++){
		if(go[id[maybe[i]]]!=1){
			is[num++]=maybe[i];
		}
	}
	qsort(is,num,sizeof(int),comp);
	printf("%d\n",num);
	for(i=0;i<num;i++){
		if(i==0){
			printf("%05d",is[i]);
		}else{
			printf(" %05d",is[i]);
		}
	}
}
