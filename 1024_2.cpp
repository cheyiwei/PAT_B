/*
ID:PAT_B_1024
time@2018/2/9
author@cheyiwei
*/

#include<cstdio>
#include<cstring>

char str_1[10000] = {'\0'};
char end[10000]={'\0'};

int main(){
	scanf("%s",str_1);
	int len = strlen(str_1);
	if(str_1[0]=='-') printf("-");
	int point_pos = len;
	int i;
	for(i=1;i<len;i++){
		if(str_1[i] == 'E') break;
	}
	str_1[i] = '\0';
	int fu = 1,exp = 0;
	if(str_1[++i] == '-') fu = -1;
	for(i++;i<len;i++){
		exp *= 10;
		exp += str_1[i] - '0';
	}
	exp *= fu;
	if(exp < 0){
		exp ++;
		printf("0.");
		while(exp!=0){
			exp++;
			printf("0");
		}
		printf("%c",str_1[1]);
		i = 3;
		while(str_1[i]!='\0') printf("%c",str_1[i++]);
	}else{
		i = 3;
		printf("%c",str_1[1]);
		while(str_1[i]!='\0'){
			exp--;
			printf("%c",str_1[i]);
			i++;
			if(exp == 0 && str_1[i]!='\0') printf(".");
		}
		while(exp > 0){
			printf("0");
			exp--;
		}
	}
	return 0;
}
