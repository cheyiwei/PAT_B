#include<stdio.h>

int a[26]={0,0,0,0,0,0};

int main(){
	char c;
	while((c=getchar())!='\n'){
		if(c >= 'a' && c <= 'z'){
			a[c-'a']++;
		}else if(c>='A' && c <= 'Z'){
			a[c-'A']++;
		}
	}
	int i;
	int max = 0;
	for(i=1;i<26;i++){
		if(a[i]>a[max]){
			max = i;
		}
	}
	printf("%c %d",max+'a',a[max]);
} 
