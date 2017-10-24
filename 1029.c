#include<stdio.h>
#include<string.h>

char str1[81];
char str2[81];
char str3[81];

int main(){
	int i = 0;
	char * p = str1;
	char * q = str2;
	scanf("%s%s",str1,str2);
	while(*p != '\0' && *q != '\0'){
		if(*p >= 'a' && *p <= 'z'){
			*p += 'A'-'a';
		}
		if(*q >= 'a' && *q <= 'z'){
			*q += 'A'-'a';
		}
		if(*p == *q){
			p++;
			q++;
		}else{
			int j = 0;
			str3[i++] = *p;
			for(j=0;j<i-1;j++){
				if(str3[j] == str3[i-1]){
					str3[i-1] = '\0';
					i--;
					break;
				}
			}
			p++;
		}
	}
	while(*p != '\0'){
		int j = 0;
		if(*p >= 'a' && *p <= 'z'){
			*p += 'A'-'a';
		}
		str3[i++] = *p;
		for(j=0;j<i-1;j++){
			if(str3[j] == str3[i-1]){
				str3[i-1] = '\0';
				i--;
				break;
			}
		}
		p++;
	}
	printf("%s",str3);
}
