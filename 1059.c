#include<stdio.h>
#include<math.h>

char prize[5][100]={"Are you kidding?","Minion","Chocolate","Mystery Award","Checked"};

int state[10001]={0};

int isPrime(int i){
	if(i<=2){
		return 1;
	}
	int num = sqrt(i)+1;
	int j = 2;
	for(j = 2;j<num;j++){
		if(i%j==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int N,K;
	int id = 1;
	scanf("%d",&N);
	int i = 1;
	int range = 1;
	for(i=0;i<N;i++){
		scanf("%d",&id);
		if(range == 1){
			state[id] = 3;
		}else if(isPrime(range)){
			state[id] = 1;
		}else {
			state[id] = 2;
		}
		range++;
	}
	scanf("%d",&K);
	for(i=0;i<K;i++){
		scanf("%d",&id);
		printf("%04d: %s\n",id,prize[state[id]]);
		if(state[id]!=0){
			state[id]=4;
		}
	}
}
