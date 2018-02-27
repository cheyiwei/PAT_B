/*
ID:PAT_B_1008
time@2018/2/5
author@cheyiwei
*/

#include<cstdio>

int main(){
	int N,M;//增量为M 
	scanf("%d %d",&N,&M);
	int a[N]={0};
	for(int i = 0;i<N;i++){
		scanf("%d",&a[i]);
	}
	M = M % N;	//M 是 增量
	if(M!=0){
		int d = N/M*1.0 + 0.5;	
		for(int i=0;i<M;i++){
			int te = a[(i + (d-1)*M)%N];
			for(int j = i + (d-1)*M ; j > i  ;j -= M){
				a[j%N] = a[(j-M)%N]; 
			}
			a[i] = te;
		}
	}
	for(int i=0;i<N;i++){
		printf("%d",a[i]);
		if(i!=N-1) printf(" ");
	}
}
