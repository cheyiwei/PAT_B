#include<stdio.h>
#include<math.h>

int main(){
	double r1,r2,r3,p1,p2,p3;
	scanf("%lf %lf %lf %lf",&r1,&p1,&r2,&p2);
	r3 = r1*r2;
	p3 = p1+p2;
	double a,b;
	a = r3*cos(p3);
	b = r3*sin(p3);
	if(a>-0.005&&a<0.005){
		printf("0.00");
	}else{
		printf("%.2lf",a);
	}
	if(b>-0.005&&b<0.005){
		printf("+0.00i");
	}else if(b<-0.005){
		printf("%.2lfi",b);
	}else{
		printf("+%.2lfi",b);
	}
} 
