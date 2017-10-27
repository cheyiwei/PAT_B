#include<stdio.h>

char str[22];


int main(){
	int gel[2]={0,0};
	int sick[2]={0,0};
	int knut[2]={0,0};
	int i=0;
	for(i=0;i<2;i++){
		scanf("%s",str);
		int j=0;
		while(str[j]!='.'){
			gel[i] *= 10;
			gel[i] += str[j] - '0';
			j++;
		}
		j++;
		while(str[j]!='.'){
			sick[i] *= 10;
			sick[i] += str[j] - '0';
			j++;
		}	
		j++;
		while(str[j]!='\0'){
			knut[i] *= 10;
			knut[i] += str[j] - '0';
			j++;
		}
	}
	if(gel[1]>gel[0] || (gel[1]==gel[0]&&sick[1]>sick[0]) || (gel[1]==gel[0]&&sick[1]==sick[0]&&knut[1]>=knut[0])){
	int end1 = gel[1] - gel[0];
	int end2 = sick[1] - sick[0];
	int end3 = knut[1] - knut[0];
	while(end3<0){
		end3 += 29;
		end2 -= 1;
	}
	while(end3>=29){
		end3 -= 29;
		end2 += 1;
	}
	while(end2<0){
		end2 += 17;
		end1 -= 1;
	}
	while(end2>=17){
		end2 -= 17;
		end1 += 1;
	}
	printf("%d.%d.%d",end1,end2,end3);
	}else{
		int end1 = gel[0] - gel[1];
		int end2 = sick[0] - sick[1];
		int end3 = knut[0] - knut[1];
		while(end3<0){
			end3 += 29;
			end2 -= 1;
		}
		while(end3>=29){
			end3 -= 29;
			end2 += 1;
		}
		while(end2<0){
			end2 += 17;
			end1 -= 1;
		}
		while(end2>=17){
			end2 -= 17;
			end1 += 1;
		}
		printf("-%d.%d.%d",end1,end2,end3);
	}
	
}
