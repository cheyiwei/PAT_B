#include<stdio.h>
#include<string.h>
char str[256];
int main(){
	int i = 0;
	int up = 0;
	gets(str);
	int len = strlen(str);
	for(i=0;i<len;i++){
		if(str[i] == '+'){
			up = 1;
			break;
		}
	}
	char c;
	while((c=getchar())!=EOF){
		if(c == '\n')
			continue;
		if(up == 1 && c>='A' && c<='Z'){
			continue;
		}
		for(i=0;i<len;i++){
			if(c>='a'&&c<='z'){
				if(str[i] - 'A' == c - 'a')
					break;
			}else if(str[i] == c)
					break;
		}
		if(i == len)
			printf("%c",c);
	}
} 
