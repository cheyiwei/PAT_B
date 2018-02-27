/*
ID:PAT_B_1009
time@2018/2/9
author@cheyiwei
*/

#include<cstdio>
#include<cstring>

void prin(){
	char s[100];
	if(scanf("%s",s)!=EOF){
		prin();
		printf("%s",s);
		printf(" ");
	}
}

int main(){
	char s[100];
	scanf("%s",s);
	prin();
	printf("%s",s);
	return 0;
}
