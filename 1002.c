#include<stdio.h>
#include<math.h>

char num[][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

void print(int sum){
	if(sum<10){
		printf("%s",num[sum]);
	}else{
		print(sum/10);
		printf(" ");
		printf("%s",num[sum%10]);
	}
}

int main(){
	char c ;
	int sum;
	while((c = getchar())!='\n')
		sum += c-'0';
	print(sum);
} 
