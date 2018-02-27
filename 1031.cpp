/*
ID:PAT_B_1031 
time@2018/2/9
author@cheyiwei
*/

#include<cstdio>
#include<cstring>

const int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
const char m[13]={"10X98765432"};

int main(){
	int N;
	scanf("%d",&N);
	bool flag = true;
	while(N--){
		int sum=0;
		char str[20];
		scanf("%s",str);
		for(int i=0,len=strlen(str)-1;i<len;i++) sum += weight[i]*(str[i]-'0');
		sum%=11;
		if(str[17]!=m[sum]){
			printf("%s\n",str);
			flag = false;
		}
	}
	if(flag==true) printf("All passed\n");
	return 0;
}
