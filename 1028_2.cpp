/*
ID:PAT_B_1028
time@2018/2/7
author@cheyiwei
*/

#include<cstdio>
#include<cstring>

int isLegal(char *str){
	char max[11]={"2014/09/07"},min[11]={"1814/09/05"};
	if(strcmp(max,str) > 0 && strcmp(str,min) > 0) return 1;
	return 0;
}

int main(){
	char max_data[11]={"1814/09/06"};
	char min_data[11]={"2214/09/06"};
	char max_name[11],min_name[11];
	int count = 0;
	int n = 0;
	scanf("%d",&n);
	while(n--){
		char name[11];
		char date[11];
		scanf("%s %s",name,date);
		if(isLegal(date)){
			count++;
			if(strcmp(max_data,date)<0){
				strcpy(max_data,date);
				strcpy(max_name,name);
			}
			if(strcmp(min_data,date)>0){
				strcpy(min_data,date);
				strcpy(min_name,name);
			}
		}
	}
	printf("%d",count);
	if(count!=0) printf(" %s %s",min_name,max_name);
	return 0;
}
