#include<stdio.h>
#include<math.h>

int isprime(int a){
	int i = 2;
	int flag = 1;
	for(i=2;i<=(int)sqrt(a);i++){
		if(a % i == 0){
			flag = 0;
			break;
		}
	}
	return flag;
}

int main(){
	int n,num;	//n为最大数num为当前找出的素数对
	int j = 1;		//j为当前最小素数的下标 
	int p0 = 2,p1 = 3; //p0为小素数，p1为大素数 
	num = 0;
	scanf("%d",&n);
	int i = 0;
	while(p1 <= n){
		if(p1 - p0 == 2){
			num ++;
		}
		j++;
		p0 = p1;
		do{
			p1++;
			if(p1 > n)
				break;
		}while(!isprime(p1));
	}
	printf("%d",num);
} 
