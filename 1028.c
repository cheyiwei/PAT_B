#include<stdio.h>

struct People{
	char name[6];
	int year;
	int month;
	int day;
	int vaild;
};

int compare(struct People p,struct People q){
	if(p.year != q.year){
		if(p.year>q.year){
			return -1;
		}else{
			return 1;
		}
	}else if(p.month != q.month){
		if(p.month>q.month)
			return -1;
		else
			return 1;
	}else if(p.day != q.day){
		if(p.day>q.day)
			return -1;
		else
			return 1;
	}else
		return 0;
}


int main(){
	int i,n,max=0,min=0;
	scanf("%d",&n);
	struct People p[n];
	int vaild = n;
	for(i=0;i<n;i++){
		scanf("%s %d/%d/%d",p[i].name,&p[i].year,&p[i].month,&p[i].day);
		if(p[i].year>=2014){
			if(p[i].year>2014){
				p[i].vaild = 0;
				vaild--;
			}else if(p[i].month > 9||(p[i].month == 9 && p[i].day > 6)){
				p[i].vaild = 0;
				vaild--;
			}else{
				p[i].vaild = 1;
			}
		}else if(p[i].year<=1814){
			if(p[i].year<1814){
				p[i].vaild = 0;
				vaild--;
			}else if(p[i].month<9 ||(p[i].month == 9 && p[i].day < 6)){
				p[i].vaild = 0;
				vaild--;
			}else{
				p[i].vaild = 1;
			}
		}else
			p[i].vaild = 1;
		if(p[i].vaild == 1 && max == 0){
			max=i;
			min=i;
		}
	}
	for(i=0;i<n;i++){
		if(p[i].vaild == 1){
			if(compare(p[max],p[i]) < 0){
				max = i;
			}
			if(compare(p[min],p[i]) > 0){
				min = i;
			}
		}
	}
	if(vaild >= 1)
		printf("%d %s %s",vaild,p[max].name,p[min].name);
	else
		printf("0");
}
