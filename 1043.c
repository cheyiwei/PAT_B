#include<stdio.h>

int main(){
	char c;
	int p=0,a=0,T=0,e=0,s=0,t=0;
	while((c=getchar())!='\n'){
		if(c == 'P'){
			p++;
		}else if(c == 'A'){
			a++;
		}else if(c == 'T'){
			T++;
		}else if(c == 'e'){
			e++;
		}else if(c == 's'){
			s++;
		}else if(c == 't'){
			t++;
		}
	}
	while(p > 0 || a > 0 || T > 0 || e > 0 || s > 0 || t > 0){
		if(p > 0){
			p--;
			printf("P");
		}
		if(a > 0){
			a--;
			printf("A");
		}
		if(T > 0){
			T--;
			printf("T");
		}
		if(e > 0){
			e--;
			printf("e");
		}
		if(s > 0){
			s--;
			printf("s");
		}
		if(t > 0){
			t--;
			printf("t");
		}
	}
} 
