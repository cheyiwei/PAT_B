#include<stdio.h>

int main(){
	int m,n;
	int a,b;
	int h;
	scanf("%d %d %d %d %d",&m,&n,&a,&b,&h);
	int graph[m][n];
	int i,j,g;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&g);
			if(g<a||g>b){
				graph[i][j]=g;
			}else{
				graph[i][j]=h;
			}
			if(j!=0){
				printf(" ");
			}
			printf("%03d",graph[i][j]);
		}
		printf("\n");
	}
} 
