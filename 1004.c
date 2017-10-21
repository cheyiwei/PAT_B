#include<stdio.h>
#include<stdlib.h>


struct Stu{
	char name[11];
	char num[11];
	int score;
};

int compare(const void * p1,const void * p2){
	struct Stu * p = (struct Stu*)p1;
	struct Stu * q = (struct Stu*)p2;
	return (q -> score - p->score);
}

int main(){
	int n;
	scanf("%d",&n);
	struct Stu student[n];
	int i = 0;
	for(i=0;i<n;i++){
		scanf("%s %s %d",student[i].name,student[i].num,&student[i].score);
	}
	qsort(student,n,sizeof(student[0]),compare);
	
	printf("%s %s\n",student[0].name,student[0].num);
	printf("%s %s\n",student[n-1].name,student[n-1].num);
}
