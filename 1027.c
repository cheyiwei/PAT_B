#include<stdio.h>
#include<math.h>

void print(int now,int large,char c){
	int i=0;
	for(i=0;i<(large-now)/2;i++){
		printf(" ");
	}
	for(i=0;i<now;i++){
		printf("%c",c);
	}
	printf("\n");
	if(now >= 3){
		print(now-2,large,c);
	}else{
		return;
	}
	for(i=0;i<(large-now)/2;i++){
		printf(" ");
	}
	for(i=0;i<now;i++){
		printf("%c",c);
	}
	printf("\n");
}

int main(){
	int num;
	char c;
	scanf("%d %c",&num,&c);
	int large = 1 , sum = 1;
	while(sum <= num){
		large += 2;
		sum += 2*large;
	}
	sum -= 2*large;
	large -= 2;
	print(large,large,c);
	printf("%d",num-sum);
} 
