#include<stdio.h>
int main(){
	int a, b, c, i=0,j;
	scanf("%d%d%d", &a, &b, &c);
	for (j=a; j<=b; j++){
		if(c%j==0){
			i++;
		}
	}
	printf("%d\n", i);
}
