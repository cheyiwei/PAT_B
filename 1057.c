#include<stdio.h>

int main(){
	int cnt0 = 0,cnt1 = 0;
	int sum = 0;
	char c;
	while((c=getchar())!='\n'){
		if(c>='A'&&c<='Z'){
			sum+=c-'A'+1;
		}else if(c>='a'&&c<='z'){
			sum+=c-'a'+1;
		}
	}
	while(sum>0){
		if(sum%2==0){
			cnt0++;
		}else{
			cnt1++;
		}
		sum/=2;
	}
	printf("%d %d",cnt0,cnt1);
} 
