#include<stdio.h>
#include<math.h>
int main(){
	int m,n1;
	scanf("%d %d",&m,&n1);
	int times = 1;
	int n=2;		//n为times对应的素数 
	int flags = 0;	//判断换行 
	while(times < n1){
		
		if(times >= m){
			printf("%d",n);
			flags++;
			if(flags%10==0){
				printf("\n");
			}else{
				printf(" ");
			}
		}
		
		while(n++){		//n是素数，跳出 
			int i=2;
			int max_i = (int)sqrt(n);
			for(i=2;i<=max_i;i++){
				if(n%i==0){
					break;
				}
			}
			if(i>max_i){
				break;
			}
		}
		times++;
	}
	printf("%d", n);
}
