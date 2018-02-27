/*
ID:PAT_B_1018
time@2018/2/5
author@cheyiwei
*/

#include<cstdio>

int change(char c){
	if(c=='J') return 0;
	if(c=='C') return 1;
	if(c=='B') return 2;
}

char maxmum(int a,int b,int c){
	if(c >= a && c >= b)	return 'B';
	else if(b>=a)	return 'C';
	else return 'J';
}

int main(){
	int times;
	scanf("%d",&times);
	int win_sta[2][3]={{0,0,0}};
	int end[2][3]={{0,0,0}};//Ê¤¡¢Æ½¡¢¸º 
	while(times--){
		getchar(); 
		int k1,k2;
		char c1,c2;
		scanf("%c %c",&c1,&c2);
		k1 = change(c1);
		k2 = change(c2);
		if((k2+1)%3==k1){	//¼×Ê¤
			win_sta[0][k1]++; 
			end[0][0]++;
			end[1][2]++;
		}else if(k1==k2){
			end[0][1]++;
			end[1][1]++;
		}else{				//ÒÒÊ¤ 
			win_sta[0][k2]++;
			end[0][2]++;
			end[1][0]++;
		}
	}
	for(int i=0;i<3;i++){
		printf("%d",end[0][i]);
		if(i!=2) printf(" ");
		else printf("\n");
	}
	for(int i=0;i<3;i++){
		printf("%d",end[1][i]);
		if(i!=2) printf(" ");
		else printf("\n");
	}
	printf("%c ",maxmum(win_sta[0][0],win_sta[0][1],win_sta[0][2]));
	printf("%c",maxmum(win_sta[1][0],win_sta[1][1],win_sta[1][2]));
}
