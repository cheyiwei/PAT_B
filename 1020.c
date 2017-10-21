#include<stdio.h>
#include<stdlib.h>

struct YueBing{
	double number;
	double total;
	double unit;
};

int compare(const void* p1,const void* p2){
	struct YueBing * p = (struct YueBing *)p1;
	struct YueBing * q = (struct YueBing *)p2;
	if(p->unit > q->unit){
		return -1;
	}else if(p->unit == q->unit){
		return 0;
	}else
		return 1;
}

int main(){
	int num;
	double demand;
	int i=0;
	scanf("%d %lf",&num,&demand);
	struct YueBing mooncake[num];
	for(i=0;i<num;i++){
		scanf("%lf",&mooncake[i].number);
	}
	for(i=0;i<num;i++){
		scanf("%lf",&mooncake[i].total);
	}
	for(i=0;i<num;i++){
		mooncake[i].unit=mooncake[i].total/mooncake[i].number;
	}
	qsort(mooncake,num,sizeof(mooncake[0]),compare);
	
	double count = 0;
	
	for(i=0;i<num;i++){
		if(mooncake[i].number!=0){
			if(demand >= mooncake[i].number){
				demand -= mooncake[i].number;
				count += mooncake[i].total;
				mooncake[i].number = 0;
			}else{
				mooncake[i].number -= demand;
				count += demand*mooncake[i].unit;
				demand = 0;
			}
			if(demand <= 0)
				break;
		}
	}
	printf("%.2lf",count);
}
