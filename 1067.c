#include<stdio.h>
#include<string.h>

char output[3][30]={"Wrong password: ","Account locked","Welcome in"};

int main(){
	char key[21];
	int times=0;
	int n=0;
	scanf("%s %d",key,&times);
	while(getchar() != '\n');
	while(1){
		n++;
		char s[500];
		scanf("%[^\n]",s);
		while(getchar() != '\n');
		if(strcmp(s,"#")==0){
			break;
		}
		if(strcmp(key,s)==0){
			printf("%s\n",output[2]);
			break;
		}else{
			printf("%s%s\n",output[0],s);
			if(times == n){
				printf("%s",output[1]);
				break;
			}
		}
	}
	return 0;
} 
