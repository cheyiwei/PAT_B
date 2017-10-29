#include<stdio.h>
#include<string.h>

int main(){
	char a[101];
	char b[101];
	scanf("%s %s",a,b);
	int len_a = strlen(a);
	int len_b = strlen(b);
	char swap[101];
	int i = 0;
	for(i=0;i<len_a;){
		swap[i++] = a[len_a-i];
	}
	swap[i] = '\0';
	strcpy(a,swap);
	
	for(i=0;i<len_b;){
		swap[i++] = b[len_b-i];
	}
	swap[i] = '\0';
	strcpy(b,swap);
	while(len_a > len_b){
		b[len_b++]='0';
	}
	b[len_b] = '\0';
	while(len_a < len_b){
		a[len_a++]= '0';
	}
	a[len_a] ='\0';
	for(i=1;i<=len_a;i++){
		char c;
		if(i%2==0){
			c = b[i-1] - a[i-1];
			if(c<0){
				c+=10;
			}
			c += '0';
		}else{
			int n;
			n = (int)(a[i-1] + b[i-1] -'0' - '0');
			n %=13;
			if(n==12){
				c = 'K';
			}else if(n==11){
				c = 'Q';
			}else if(n==10){
				c = 'J';
			}else{
				c = n + '0';
			}
		}
		b[i-1] = c;
	}
	for(i=len_a -1;i>=0;i--){
		printf("%c",b[i]); 
	} 
} 
