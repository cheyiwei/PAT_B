#include<stdio.h>

int compare(const void *p1,const void *p2){
	int * p = (int *)p1;
	int * q = (int *)p2;
	return (*q-*p);
}


int main(){
	int times = 0;
	int n;
	scanf("%d",&n);
	int num[n];
	int m[n];
	int i=0;
	for(i=n-1;i>=0;i++){
		scanf("%d",&num[i]);
		m[i] = 0;
	}
	
	for(i=0;i<n;i++){
		int a = num[i];
		while(a!=1){
			if(a % 2 == 0){
				a /= 2;
				int j;
				for(j=0;j<n;j++){
					if(a == num[j])
						m[j] = 1;
				}
			}else{
				a *= 3;
				a += 1;
				a /= 2;
				int j;
				for(j=0;j<n;j++){
					if(a == num[j])
						m[j] = 1;
				}
			}
		}
	}
	int f = 0;
	for(i=0;i<n;i++){
		if(m[i]==0){
			if( f != 0){
				printf(" ");
			}
			f=1;
			printf("%d",num[i]);
		}
	}
}
