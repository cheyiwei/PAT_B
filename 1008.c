#include<stdio.h>

void swap(int *a,int *b){
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n];
	int b[n];
	int i = 0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		b[(i+m)%n] = a[i];
	}
	for(i=0;i<n;i++){
		printf("%d",b[i]);
		if(i<n-1){
			printf(" ");
		}
	}
}
