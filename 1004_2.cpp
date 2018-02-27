/*
ID:PAT_B_1004
time@2018/2/7
author@cheyiwei
*/

#include<cstdio>
#include<cstring>

int main(){
	int n;
	scanf("%d",&n);
	char max_name[11],max_id[11];
	int max = -1;
	char min_name[11],min_id[11];
	int min = 101;
	while(n--){
		char name[11];
		char id[11];
		int score = 0;
		scanf("%s %s %d",name,id,&score);
		if(score>max){
			max=score;
			strcpy(max_name,name);
			strcpy(max_id,id);
		}
		if(score<min){
			min=score;
			strcpy(min_name,name);
			strcpy(min_id,id);
		}
	}
	printf("%s %s\n",max_name,max_id);
	printf("%s %s\n",min_name,min_id);
}
