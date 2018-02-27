/*
ID:PAT_B_1022 
time@2018/2/8
author@cheyiwei
*/
#include<cstdio>

const int GALLON = 29*17;
const int SICK = 29;

int main(){
	int gal,sic,kunt;
	int a,b,c;
	scanf("%d.%d.%d %d.%d.%d",&gal,&sic,&kunt,&a,&b,&c);
	int price = gal*GALLON + sic *SICK + kunt;
	int money = a*GALLON + b* SICK + c;
	int change = money-price;
	if(change < 0){
		printf("-");
		change = -change;
	}
	printf("%d.%d.%d",change/GALLON,(change%GALLON)/SICK,change%SICK);
	return 0;
}
