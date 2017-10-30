#include<stdio.h>

int main(){
	int n,D;
	double e;
	scanf("%d %lf %d",&n,&e,&D);
	int N = n;
	int num_em_maybe = 0;
	int num_empty = 0;
	while(N--){
		int day = 0;
		int day_em = 0;
		double use;
		scanf("%d",&day);
		int i = day;
		while(i--){
			scanf("%lf",&use);
			if(use<e){
				day_em++;
			}
		}
		if(day_em * 2 > day){
			if(day>D){
				num_empty++;
			}else{
				num_em_maybe++;
			}
		}
	}
	printf("%.1lf%% %.1lf%%",num_em_maybe/(n*0.01),num_empty/(n*0.01));
} 
