#include<stdio.h>
#include<string.h>

char num[10000];
int in;

int main(){
	char c;
	int in = 0;
	int i = 0;
	while((c=getchar())!='E'){
		num[i++] = c;
	}
	num[i] = '\0';
	scanf("%d",&in);
	if(in != 0){
		if(num[0] == '-'){
			printf("-");
		}
		//����Ϊ�Ƿ���λ����� 
		if(in < 0){
			printf("0.");
			in = -in;
			for(i=0;i<in-1;i++){
				printf("0");
			}
			int len = strlen(num);
			for(i=0;i<len;i++){
				if(num[i] <= '9' && num[i] >= '0')
					printf("%c",num[i]);
			}
		}else{
			int len = strlen(num);	//len - 3 ΪС������������Ŀ 
			int p = in - (len-3); //pΪ��Ҫ��0����Ŀ(С����������һλ�ľ���)
			if(p>=0){
				for(i=0;i<len;i++){
				if(num[i] <= '9' && num[i] >= '0')
					printf("%c",num[i]);
				}
				while(p--){
					printf("0");
				}
			}else if(p<0){
				//������Ҫ����ʱ
				i = 3;
				printf("%c",num[1]);
				while(in--){
					if(num[i] <= '9' && num[i] >= '0'){
						printf("%c",num[i++]);
					}
				}
				printf(".");
				while(i<len){
					printf("%c",num[i++]);
				}
			}
		}
	}else{
		printf("%s",num);
	}
} 
