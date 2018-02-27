/*
ID:PAT_B_1015
time@2018/2/9
author@cheyiwei
*/

#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

struct Stu{
	int registername;
	int talence;
	int manner;
	int kind;
}stu[100010];

bool cmp(Stu a,Stu b){
	if(a.kind != b.kind) return a.kind < b.kind;
	else if((a.manner + a.talence) !=(b.manner+b.talence)) return (a.manner + a.talence) > (b.manner+b.talence);
	else if(a.manner != b.manner) return a.manner > b.manner;
	else return a.registername < b.registername;
}

int main(){
	int N,L,H;
	scanf("%d %d %d",&N,&L,&H);
	int sum = 0;
	while(N--){
		int id,tal,man;
		scanf("%d %d %d",&id,&man,&tal);
		if(tal >= L && man >= L){
			stu[sum].manner=man;
			stu[sum].talence=tal;
			stu[sum].registername = id;
			if(man>=H && tal >= H) stu[sum++].kind = 0;
			else if(man >= H) stu[sum++].kind = 1;
			else if(man >= tal) stu[sum++].kind = 2;
			else stu[sum++].kind = 3;
		}
	}
	printf("%d\n",sum);
	sort(stu,stu+sum,cmp);
	for(int i = 0;i<sum;i++){
		printf("%d %d %d\n",stu[i].registername,stu[i].manner,stu[i].talence);
	}
}
