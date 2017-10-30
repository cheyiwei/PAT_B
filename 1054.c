#include<stdio.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);
	int N = 0;
	double sum = 0;
	while(n--){
		char s[100];
		scanf("%s",s);
		int i = 0;
		double num = 0;
		int flag = 0;
		int neg = 0;
		int len = strlen(s);
		for(i=0;i<len;i++){
			if(s[i] == '.' && flag == 0 || (s[i]=='-')&&neg==0){
				if(s[i]=='.')
					flag = 1;
				else
					neg = 1;
			}else if(s[i] >= '0' && s[i] <= '9'){
				if(flag != 0){
					double numberofend = s[i] - '0';
					flag++;
					int j = 0;
					for(j=0;j<flag-1;j++){
						numberofend*=0.1;
					}
					if(flag > 3){
						printf("ERROR: %s is not a legal number\n",s);
						break;
					}
					num += numberofend;
				}else{
					double numberofbef = s[i] - '0';
					num*=10;
					num+=numberofbef;
				}
			}else{
				printf("ERROR: %s is not a legal number\n",s);
				break;
			}
			if(num >1000){
				printf("ERROR: %s is not a legal number\n",s);
				break;
			}
		}
		if(neg == 1){
			num = -num;
		}
		if(i==len){
			sum+=num;
			N++;
		}
	}	
	if(N>0){
		if(N==1){
			printf("The average of 1 number is %.2lf\n",sum);
		}else
			printf("The average of %d numbers is %.2lf\n",N,sum/N);
	}else{
		printf("The average of 0 numbers is Undefined\n");
	}
	
} 
