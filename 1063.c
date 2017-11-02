#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d",&n);
	double max = 0;
	double a,b;
	while(n--){
		scanf("%lf %lf",&a,&b);
		a=a*a+b*b;
		a = sqrt(a);
		if(a>max){
			max=a;
		}
	}
	printf("%.2lf",max);
} 
