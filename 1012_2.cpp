/*
ID:PAT_B_1012
time@2018/2/5
author@cheyiwei
*/

#include<cstdio>

int main(){
	int a[5]={0};
	int num[5]={0};
	int n;
	scanf("%d",&n);
	while(n--){
		int temp;
		scanf("%d",&temp);
		if(temp%5 == 0){
			if(temp%2==0){
				a[0] += temp;
				num[0]++;
			}
		}else if(temp %5 == 1){
			if(num[1]%2 == 0){
				a[1] += temp;
			}else{
				a[1] -= temp;
			}
			num[1]++;
		}else if(temp %5 == 2){
			num[2]++;
			a[2] = num[2];
		}else if(temp %5 == 3){
			a[3] += temp;
			num[3]++;
		}else if(temp %5 == 4){
			num[4]++;
			if(temp>a[4]){
				a[4]=temp;
			}
		}
	}
	if(num[0]>0)
		printf("%d ",a[0]);
	else
		printf("N ");
	if(num[1]>0)
		printf("%d ",a[1]);
	else
		printf("N ");
	if(num[2]>0)
		printf("%d ",a[2]);
	else
		printf("N ");
	if(num[3]>0)
		printf("%.1lf ",(double)a[3]/num[3]);
	else
		printf("N ");
	if(num[4]>0)
		printf("%d",a[4]);
	else
		printf("N");
} 
