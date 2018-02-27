/*
ID:PAT_B_1014
time@2018/2/9
author@cheyiwei
*/

#include<stdio.h>
#include<cstring>
bool isBig(char c){
	if(c>='A'&&c<='Z') return true;
	else return false;
}

bool isSmall(char c){
	if(c>='a'&&c<='z') return true;
	else return false;
}

const char *Week[8]={"","MON","TUE","WED","THU","FRI","SAT","SUN"};

int main(){
	char str[2][100];
	int week=0,hour=0,min=0;
	scanf("%s %s",str[0],str[1]);
	for(int len = strlen(str[0]),i=0;i<len;i++){
		if(str[0][i]==str[1][i]){
			if(week == 0){
				if(isBig(str[0][i])) week = str[0][i] - 'A' + 1;
				if(week > 7) week = 0;
			}else{
				if(str[0][i] >= '0' && str[0][i] <= '9') hour = str[0][i] - '0' + 1;
				else if(str[0][i]>='A' && str[0][i] <= 'N') hour = 10 + str[0][i] - 'A' + 1;
				if(hour != 0) break;
			} 
		}
	}
	scanf("%s %s",str[0],str[1]);
	for(int len = strlen(str[0]),i=0;i<len;i++){
		if((isSmall(str[0][i]) || isBig(str[0][i]) )&& str[0][i]==str[1][i]) min = i;
		if(min != 0) break;
	}
	printf("%s %02d:%02d",Week[week],hour - 1,min);
}
