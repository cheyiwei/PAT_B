#include<stdio.h>
#include<string.h>

int a[10];

int main(){
	char s[1001];
	scanf("%s",s);
	int i;
	for(i=0;i<10;i++){
		a[i]=0; 
	}
	int len = strlen(s);
	for(i=0;i<len;i++){
		a[s[i]-'0']++;
	}
	for(i=0;i<10;i++){
		if(a[i]!=0) 
		printf("%d:%d\n",i,a[i]);
	}
} 
