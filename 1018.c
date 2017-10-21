#include<stdio.h>
#include<string.h>
int a[3],b[3];
int va[3],vb[3];

int main(){
	int times;
	scanf("%d",&times);
	while(times--){
		int i;	
		char a1,b1;
		scanf("\n%c %c",&a1,&b1);
		if(a1 == 'C'){
			if(b1 == 'J'){	
				i = 0;
			}else if(b1 == 'C'){
				i = 1;
			}else{
				i = 2;
			}
		}else if(a1 == 'J'){
			if(b1 == 'B'){
				i = 0;
			}else if(b1 == 'J'){
				i = 1;
			}else{
				i = 2;
			}
		}else{
			if(b1 == 'C'){
				i = 0;
			}else if(b1 == 'B'){
				i = 1;
			}else{
				i = 2;
			}
		}
		
		if(i == 0){
			a[0]++;
			b[2]++;
			switch (a1){
				case 'C' : va[0]++; break;
				case 'J' : va[1]++; break;
				case 'B' : va[2]++; break;
			}
		}else if(i==1){
			a[1]++;
			b[1]++;
		}else if(i==2){
			a[2]++;
			b[0]++;
			switch (b1){
				case 'C' : vb[0]++; break;
				case 'J' : vb[1]++; break;
				case 'B' : vb[2]++; break;
			}
		}
	}
	printf("%d %d %d\n",a[0],a[1],a[2]);
	printf("%d %d %d\n",b[0],b[1],b[2]);
	if(va[2]>=va[1]){
		if(va[2]>=va[0])
			printf("%c",'B');
		else
			printf("%c",'C');
	}else if(va[1]>va[0]){
		printf("%c",'J');
	}else{
		printf("%c",'C');
	}
	printf(" ");
	if(vb[2]>=vb[1]){
		if(vb[2]>=vb[0])
			printf("%c",'B');
		else
			printf("%c",'C');
	}else if(vb[1]>vb[0]){
		printf("%c",'J');
	}else{
		printf("%c",'C');
	}
}
