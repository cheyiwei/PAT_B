/*
ID:PAT_B_1021 
time@2018/2/9
author@cheyiwei
*/

#include<cstdio>
#include<cstring>

int main(){
	int num[10]={0};
	char str[1010]={'\0'};
	scanf("%s",str);
	for(int i=0,len = strlen(str);i<len;i++) num[str[i]-'0']++;
	for(int i=0;i<10;i++) if(num[i]!=0) printf("%d:%d\n",i,num[i]);
	return 0;
}
