/*
ID:PAT_B_1002
time@2018/2/9
author@cheyiwei
*/

#include<cstdio>
#include<cstring>

const char change[10][10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

void prin(int sum){
	if(sum >= 10){
		prin(sum/10);
		printf(" ");
		prin(sum%10);
	}  
	else printf("%s",change[sum]);
}
int main(){
	char str[120]={'\0'};
	scanf("%s",str);
	int sum=0;
	for(int i = 0,len = strlen(str);i<len;i++) sum += str[i] - '0';
	prin(sum);
}
