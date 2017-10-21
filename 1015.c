#include<stdio.h>
#include<string.h>
#include<stdlib.h>	
struct S{
	char num[9];
	int character;
	int talent;
	int type;
}Stu[100000];	//type为被录取的优先级 

int judge(const void *p,const void *q){
	struct S* p1 = (struct S *)q;
	struct S* p2 = (struct S *)p;
	int a = p1->type - p2->type;
	if(a != 0)
		return a;
	a = p1->talent + p1->character - p2->talent - p2->character;
	if(a != 0)
		return a;
	else if(p1->character != p2->character)
		return p1->character-p2->character;
	else
		return (strcmp(p2->num,p1->num));
}

int main(){
	int n,l,h;
	scanf("%d %d %d",&n,&l,&h);
	int i=0;
	for(i=0;i<n;i++){
		scanf("%s %d %d",Stu[i].num,&Stu[i].character,&Stu[i].talent);
		if(Stu[i].character >= h && Stu[i].talent >= h){
			Stu[i].type = 4;
		}else if(Stu[i].character >= h && Stu[i].talent >= l){
			Stu[i].type = 3;
		}else if(Stu[i].character >= l && Stu[i].talent >= l && Stu[i].character >= Stu[i].talent){
			Stu[i].type = 2;
		}else if(Stu[i].character >= l && Stu[i].talent >= l){
			Stu[i].type = 1;
		}else{
			Stu[i].type = 0;
		}
	}
	int len = n;
	int j=0;
	struct S s;
//	for(i=0;i<n-1;i++){
//		int max_index = i;
//		for(j=i+1;j<n;j++){
//			if(judge(Stu[max_index],Stu[j])<0){
//				max_index = j;
//			}
//		}//选出一个最大的 
//		s=Stu[max_index];
//		Stu[max_index]=Stu[i];
//		Stu[i]=s;	//和Stu[i]交换 
//	}
	qsort(Stu,n,sizeof(Stu[0]),judge);
	len = n;
	for(i=n-1;i>=0;i--){
		if(Stu[i].type==0){
			len--;
		}else{
			break;
		}
	}
	printf("%d\n",len);
	for(i=0;i<len;i++){
		printf("%s %d %d\n",Stu[i].num,Stu[i].character,Stu[i].talent);
	}
}
