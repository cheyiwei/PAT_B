#include<stdio.h>
#include<string.h>

char n[1001];
char end[1001]={'0'};

int main(){
	char b;
	scanf("%s %c",n,&b);
	int i=0,pos_index = 0;
	int len = strlen(n);
	for(i=0;i<len;i++){
		int pos = 0 ;//当前位的数字 
		while(n[i]>= b){
			n[i]-= b-'0';
			pos += 1;
		}
		if(i>0){
			int a = (int)(n[i-1]-'0')*10 + (int)(n[i]-'0');
			int m = a/(int)(b - '0');//m是商 
			int q = a%(int)(b - '0');//n是余数
			pos += m;
			n[i-1]=(char)'0';
			n[i] = (char)'0' + q;
		}
		if(pos > 0 || pos_index > 0){
			end[pos_index] = '0';
			while(pos>10){
				end[pos_index - 1] += 1;
				pos -= 10;
			}
			while(pos>0){
				end[pos_index] += 1;
				pos -= 1;
			}
			pos_index++;
		}
	}
	printf("%s %c",end,n[i-1]);
}
