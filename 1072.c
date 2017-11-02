#include<stdio.h>

int thing[10000]={0};

int main(){
	int n,m,i;
	scanf("%d %d",&n,&m);
	while(m--){
		int num;
		scanf("%d",&num);
		thing[num]=1;
	}
	int stu=0,thi = 0;
	while(n--){
		char name[6];
		scanf("%s",name);
		int package;
		scanf("%d",&package);
		int a[package];
		int error[package];
		int flag = 0;
		for(i=0;i<package;i++){
			scanf("%d",&a[i]);
			if(thing[a[i]]==1){
				error[flag++]=a[i];
				thi++;
			}
		}
		if(flag>=1){
			stu++;
			printf("%s:",name);
			for(i=0;i<flag;i++){
				printf(" ");
				printf("%04d",error[i]);
			}
			printf("\n");
		}
	}
	printf("%d %d",stu,thi);
} 
