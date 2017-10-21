#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compare1(const void *p1,const void *p2){
	char *p = (char *)p1;
	char *q = (char *)p2;
	return -strcmp(p,q);
}

int compare2(const void *p1,const void *p2){
	char *p = (char *)p1;
	char *q = (char *)p2;
	return strcmp(p,q);
}

void ito(int i,char*p){
	int pos = 3;
	while(pos>=0){
		p[pos--] = '0' + i%10;
		i /= 10;
	}
	p[4] = '\0';
}
int ato(char *num){
	int i=0,j=0;
	int len = strlen(num);
	for(j=0;j < len;j++){
		i=i*10+(int)(num[j]-'0');
	}
	return i;
}
int main(){
	int i;
	scanf("%d",&i);
	int flag = 0;
	while((i!=0&&i!=6174)||flag == 0){
		char num1[5];
		char num2[5];
		int a1,a2;
		ito(i,num1);
		ito(i,num2);
		qsort(num1,4,sizeof(char),compare1);
		qsort(num2,4,sizeof(char),compare2);
		printf("%s - %s = %04d\n",num1,num2,ato(num1)-ato(num2));
		i=ato(num1)-ato(num2);
		flag = 1;
	}
}
