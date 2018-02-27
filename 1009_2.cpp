/*
ID:PAT_B_1009_huiwen
time@2018/2/5
author@cheyiwei
*/

#include<cstdio>
#include<cstring>

int main(){
	char str[81]={'\0'};
	char ans[90][90];
	gets(str);
	int len = strlen(str);
	int num = 0;
	for(int i = 0,l=0;i<len;i++){
		if(str[i]==' '){
			ans[num][l]='\0';
			num++;
			l=0;
		}else{
			ans[num][l++]=str[i];
		}
	}
	for(int i=num;i>=0;i--){
		printf("%s",ans[i]);
		if(i!=0) printf(" ");
	}
	return 0;
}
