/*
ID:PAT_B_1048
time@2018/2/9
author@cheyiwei
*/

#include<cstdio>
#include<cstring>

char change(int i){
	if(i<=9) return i + '0';
	else if(i==10) return 'J';
	else if(i==11) return 'Q';
	else if(i==12) return 'K';
}

int main(){
	char str_1[101]={'\0'},str_2[101]={'\0'};
	char str_3[101]={'\0'};
	scanf("%s %s",str_1,str_2);
	int len1 = strlen(str_1);
	int len2 = strlen(str_2);
	int len = 0;
	for(int i = len1 - 1,j = len2 - 1;i>=0 || j >= 0;i--,j--){
		len++;
		int a1 = i>=0?str_1[i]-'0':0;
		int a2 = j>=0?str_2[j]-'0':0;
		if(len % 2 == 1){
			int doge;
			doge = a1 + a2;
			doge %= 13;
			str_3[len - 1] = change(doge);
		}else{
			int doge = a2 - a1;
			if(doge < 0) doge += 10;
			str_3[len - 1] = change(doge);
		}
	}
	for(int i = len - 1;i>=0;i--) printf("%c",str_3[i]);
	return 0;
}
