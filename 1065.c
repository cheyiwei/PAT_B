#include<stdio.h>
#include<stdlib.h>

int comp(const void* p,const void *q){
	return *(int *)p - *(int *)q;  
}

int id[100000]={0};		//id�洢��Ӧ�±�ķ�/�� 
int go[100000]={0};		//go�洢��ǰ��ŵ����Ƿ�ȥ 
int maybe[10000]={0};	//maybeΪȥ���˵���� 
int is[10000]={0}; 		//is�洢������� 

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
