#include<stdio.h>

int main(){
  int max=0,min=0;
  int n=0;
  
  scanf("%d",&n);
  
  int num[n];
  int end[n];
  int e[n];
  int i,j;
  
  for(i=0;i<n;i++){
    scanf("%d",&num[i]);
    if(num[i]>max){//此时max是从0--i-1的最大值
      max = num[i];
      end[i] = 1;
    }else{
      end[i] = 0;
    }
  }
  min = num[n-1];
  for(i=n-1,j=0;i>=0;i--){
    if(num[i]<=min){
      min = num[i];
      if(end[i] == 1){
        e[j++] = i;
      }
    }
  }
  printf("%d\n",j);
  for(i=j-1;i>0;i--){
    printf("%d ",num[e[i]]);
  }
  if(j>=1)
  	printf("%d",num[e[0]]);
  else
  	printf("\n");
}
