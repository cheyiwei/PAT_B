#include<stdio.h>
int main(){
	long int a,da,b,db;
	scanf("%ld %ld %ld %ld",&da,&a,&db,&b);
	int pa=0;
	int pb=0;
	int i=0;
	while(da>0){
		if(da%10 == a){
			pa = pa*10+(int)a;
		}
		da/=10;
	}
	while(db > 0){
		if(db%10==b){
			pb = pb*10+(int)b;
		}
		db/=10;
	}
	printf("%d",pa+pb);
} 
