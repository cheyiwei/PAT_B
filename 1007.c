#include<stdio.h>
#include<math.h>

int isprime(int a){
	int i = 2;
	int flag = 1;
	for(i=2;i<=(int)sqrt(a);i++){
		if(a % i == 0){
			flag = 0;
			break;
		}
	}
	return flag;
}

int main(){
	int n,num;	//nΪ�����numΪ��ǰ�ҳ���������
	int j = 1;		//jΪ��ǰ��С�������±� 
	int p0 = 2,p1 = 3; //p0ΪС������p1Ϊ������ 
	num = 0;
	scanf("%d",&n);
	int i = 0;
	while(p1 <= n){
		if(p1 - p0 == 2){
			num ++;
		}
		j++;
		p0 = p1;
		do{
			p1++;
			if(p1 > n)
				break;
		}while(!isprime(p1));
	}
	printf("%d",num);
} 
