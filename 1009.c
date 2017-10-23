#include<stdio.h>
#include<string.h>

int main(){
	char str[81];
	char c;
	int i = 0;
	int j = 0;
	while((c=getchar())!='\n' && c!='\0'){
		str[i++] = c;
	}
	
	str[i] = '\0';

	int len = strlen(str);
	
	for(i=len-1;i>=0;i--){
		if(str[i] == ' '){
			printf("%s ",str + i + 1);
			str[i] = '\0';
		}
		if(i==0){
			printf("%s",str);
		}
	}
}
