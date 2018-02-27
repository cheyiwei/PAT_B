/*
ID:PAT_B_1036
time@2018/2/4
author@cheyiwei
*/

#include<cstdio>

int main(){
	int edge,c;
	scanf("%d %c",&edge,&c);
	int i = 1,j = 1;
	int column = (edge+1)/2;
	for(i=1;i<=column;i++){
		if(i==1 || i == column){
			for(j=0;j<edge;j++){
				printf("%c",c);
			}
		}else{
			printf("%c",c);
			for(j=0;j<edge - 2;j++){
				printf(" ",c);
			}
			printf("%c",c);
		}
		if(i!=column)
			printf("\n");
	}
}
