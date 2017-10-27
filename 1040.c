#include<stdio.h>
#include<string.h>

char str[100001];

int main(){
	scanf("%s",str);
	int len = strlen(str);
	int i;
	int num_t=0; 
	int num_p=0;
	int result=0;
	for(i=0;i<len;i++){
		if(str[i]=='T')
			num_t++;
	}
	for(i=0;i<len;i++){
		if(str[i]=='P'){
			num_p++;
		}else if(str[i]=='A'){
			result += num_p*num_t; 
			result %= 1000000007;
		}else 
			num_t--;
	}
	printf("%d",result%1000000007);
}
