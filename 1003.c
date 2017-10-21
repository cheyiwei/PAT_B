#include<stdio.h>
#include<string.h>

int main(){
	int times;
	scanf("%d",&times);
	while(times--){
		int a_p = 0;
		int a = 1;
		int t_a = 0;
		int state = 1;
		char str[101];
		scanf("%s",str);
		int len = strlen(str);
		int i = 0;
		for(i=0;i<len;i++){
			switch(state){
				case 1:
					if(str[i] == 'A'){
						state = 1;
						a_p++;
					}
					else if(str[i] == 'P')
						state = 2;
					else
						state = 5;
					break;
				case 2:
					if(str[i] == 'A')
						state = 3;
					else
						state = 5;
					break;
				case 3:
					if(str[i] == 'A'){
						state = 3;
						a++;
					}
					else if(str[i] == 'T')
						state = 4;
					else
						state = 5;
					break;
				case 4:
					if(str[i] == 'A'){
						state = 4;
						t_a++;
					}
					else
						state = 5;
					break;
				case 5:
					break; 
			}		
		}
		if(state == 4 && (a_p * a == t_a)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
