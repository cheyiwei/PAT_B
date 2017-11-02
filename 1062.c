#include<stdio.h>

int gcd(int a,int b){
	if(a==0){
		return b;
	}else{
		return gcd(b%a,a);
	}
}

int main(){
	double n1,m1,n2,m2,k;
	double n;
	scanf("%lf/%lf %lf/%lf %lf",&n1,&m1,&n2,&m2,&k);
	double x1=n1/m1;
	double x2=n2/m2;
	if(x1>x2){
		double x3 = x1;
		x1 = x2;
		x2 = x3;
	}
	int i = 1;
	int flag = 0;
	int a[1000]={0};
	for(i=1;(i/k)<x2;i++){
		if(gcd(i,(int)k)==1){
			if(i/k > x1){
				a[flag++]=i;
			}
		}
	}
	for(i=0;i<flag;i++){
		printf("%d/%.0lf",a[i],k);
		if(i!=flag-1){
			printf(" ");
		}
	}
} 
