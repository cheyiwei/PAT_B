#include<stdio.h>
#include<string.h>

char s1[1001];
char s2[1001];
int num[256];

int main(){
	scanf("%s",s1);
	scanf("%s",s2);
	int super=0;
	int insuf=0;
	int len1=strlen(s1);
	int len2=strlen(s2);
	int i=0;
	for(i=0;i<len1;i++){
		num[(int)s1[i]]++;
	}
	for(i=0;i<len2;i++){
		num[(int)s2[i]]--;
	}
	for(i=0;i<256;i++){
		if(num[i]<=0){
			insuf += num[i];
		}else{
			super += num[i];
		}
	}
	if(insuf<0){
		printf("No %d",-insuf);
	}else{
		printf("Yes %d",super);
	}
} 
