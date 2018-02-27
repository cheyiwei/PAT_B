/*
ID:PAT_B_1041
time@2018/2/6
author@cheyiwei
*/

#include<cstdio>
#include<cstring>
#define maxn 1010

struct Stu{
	char id[15];
	int num;
}student[1010];

int main(){
	int m,N = 0;
	scanf("%d",&N);
	while(N--){
		char str[15];
		int examset;
		int num;
		scanf("%s %d %d",str,&examset,&num);
		strcpy(student[examset].id,str);
		student[examset].num=num;
	}
	scanf("%d",&m);
	while(m--){
		int examset;
		scanf("%d",&examset);
		printf("%s %d\n",student[examset].id,student[examset].num);
	}
	return 0;
}
