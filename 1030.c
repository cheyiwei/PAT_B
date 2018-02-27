#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b){
	return *(int*)a-*(int*)b;
}
int main(){
	int n,p;
	scanf("%d %d",&n,&p);
	int a[n];
	int i = 0;
	for(i=0;i<n;i++){					
		scanf("%d",&a[i]);
	}
	
	qsort(a,n,sizeof(int),compare);	
	
	int result = 0;//result�洢��� 
	int last;
	int first;
 
	for(first = 0,last = 0;last<n;first++){
		//1l�Ƿ�ֹ��� 
		while(last < n && a[last] <= (1L * a[first] * p)){
			last++;
		}
		//ÿ��ѭ��������,�������� [first��last-1]Ϊһ�����������ļ���,�����䳤��Ϊlast-result
		//�´�ѭ��������a[first]��Ѱ����һ��a[last] 
		if(result < last - first){
			result = last - first;
		}
	}
	printf("%d",result);
	return 0;
} 
