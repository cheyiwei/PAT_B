#include<stdio.h>
#include<string.h>
int main(){
	char str[4][60];
	char str_day[][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	char day = '\0',hour = '\0';
	int min = 0;
	int i = 0;
	for(i=0;i<4;i++){
		scanf("%s",str[i]);
	}
	int len1 = strlen(str[0]);
	int len2 = strlen(str[1]);
	int len3 = strlen(str[2]);
	int len4 = strlen(str[3]);
	int len = (len1>len2)?len2:len1;
	for(i=0;i<len;i++){
		if(hour != '\0')
			break;
		else if(day == '\0'){
			if(str[0][i] == str[1][i] && str[0][i] >= 'A' && str[0][i]<='G'){
				day = str[0][i];
			}
		}else{
			if(str[0][i] == str[1][i] &&((str[0][i]>='A' &&str[0][i]<='N') || (str[0][i]>='0' &&str[0][i]<='9'))){
				hour = str[0][i];
			}
		}
	}
	len = (len3>len4)?len4:len3;
	for(i = 0,min = 61;i<len;i++){
		if(min!=61)
			break;
		else if(str[2][i]==str[3][i] && ((str[2][i]>='A' &&str[2][i]<='Z') || (str[2][i]>='a' &&str[2][i]<='z'))){
			min = i ;
		}
	}
	printf("%s %02d:%02d",str_day[day - 'A'],(hour>='A'&&hour<='N')?(int)(hour-'A'+10):(int)(hour - '0'),min);
	return 0;
} 
