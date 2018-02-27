/*
ID:PAT_B_1022 
time@2018/2/8
author@cheyiwei
*/

#include<cstdio>
#include<cstring>

int main(){
	int a,b,d;
	int str[100]={0};
	scanf("%d %d %d",&a,&b,&d);
	b+=a;
	int len = 0;
	if(b==0) printf("0");
	else{
		while(b!=0){
			str[len++] = b%d;
			b/=d;
		}
		len--;
		for(int i=len;i>=0;i--){
			printf("%d",str[i]);
		}
	}
	return 0; 
}
