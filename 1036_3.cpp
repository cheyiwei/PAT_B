/*
ID:PAT_B_1036
time@2018/2/8
author@cheyiwei
*/

#include<cstdio>

int main(){
	int row,column;
	char c;
	scanf("%d %c",&column,&c);
	row = (column + 1)/2;
	for(int i=0;i<row;i++){
		if(i==0 || i==row - 1){
			for(int j=0;j<column;j++){
				printf("%c",c);
			}
		}else{
			printf("%c",c);
			for(int j=0;j<column-2;j++){
				printf(" ");
			}
			printf("%c",c);
		}
		printf("\n");
	}
}
