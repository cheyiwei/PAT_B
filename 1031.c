#include<stdio.h>

int weight[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};

char M[] = {'1','0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

int main(){
	int times;
	scanf("%d",&times);
	int flag = 0;
	while(times--){
		char str[19];
		scanf("%s",str);
		int i,sum;
		for(i=0,sum=0;i<17;i++){
			sum+=(weight[i]*(str[i] - '0'));
		}
		sum %= 11;
		if(str[17]!=M[sum]){
			flag = 1;
			printf("%s\n",str);
		}
	}
	if(flag==0){
		printf("All passed");
	}
}
