#include<stdio.h>

int main(){
	int n;
	
	scanf("%d",&n);
	double temp;
	double sum;
	int i=0;
	for(i=0;i<n;i++){
		scanf("%lf",&temp);
		sum += temp*(n-i)*(i+1);
	}
	printf("%.2lf",sum);
}
