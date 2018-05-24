#include<stdio.h>
int main(){
	int n, i = 0, x;
	scanf("%d", &n);
	while(i != n) {
		i++;
		x = i;
		if(x % 3 == 0){
			printf(" %d", i);
		}else if(x >= 13){
			while(x >= 3){
				if(x % 10 == 3){
					printf(" %d", i);
					break;
				}
				x = x / 10;		
			}
		}
	}
	printf("\n");
}
