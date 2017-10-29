#include<stdio.h>
#include<string.h>

int main(){
	char number[][6]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
	char adv[][6]={"###","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
	int n;
	scanf("%d",&n);
	while(n--){
		int num=0;
		char str[12];
		int i;
		for(i=0;i<12;i++){
			str[i]='\0';
		}
		char c;
		while(gets(str)&&str[0] == '\0');
		int len = strlen(str);
		if(str[0]>='0'&&str[0]<='9'){
			for(i=0;i<len;i++){
				num *= 10;
				num += str[i] - '0';
			}
			int a = 0,b = 0;
			a=(num%13);
			num/=13;
			b=num;
			if(b>0){
				printf("%s",adv[b]);
				if(a!=0){
					printf(" %s",number[a]);
				} 
			}else{
				printf("%s",number[a]);
			}
			printf("\n");
		}else{
			if(len == 4){
				printf("0\n");
			}else{
				int num=0;
				char s[4];
				s[0] = str[0];
				s[1] = str[1];
				s[2] = str[2];
				s[3] = '\0';
				int i = 0;
				for(i=1;i<13;i++){
					if(strcmp(s,adv[i])==0){
						num = i;
						num *= 13;
						break;
					}
				}
				if(num == 0){
					for(i=1;i<13;i++){
						if(strcmp(s,number[i])==0){
							num += i;
						}
					}
				}else{
					if(str[4]!='\0'){
						s[0] = str[4];
						s[1] = str[5];
						s[2] = str[6];
						for(i=1;i<13;i++){
							if(strcmp(s,number[i])==0){
								num += i;
								break;
							}
						}
					}
				}
				printf("%d\n",num);
			}
		}
		
	}
} 
