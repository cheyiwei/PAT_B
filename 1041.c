#include<stdio.h>
#include<string.h>

struct Stu{
	char s[15];
	int num;
}student[1001];
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		char line[15];
		int num;
		scanf("%s",line);
		scanf("%d",&num);
		scanf("%d",&student[num].num);
		strcpy(student[num].s,line);
	}
	scanf("%d",&n);
	while(n--){
		int num;
		scanf("%d",&num);
		printf("%s %d",student[num].s,student[num].num);
		printf("\n");
	}
} 
