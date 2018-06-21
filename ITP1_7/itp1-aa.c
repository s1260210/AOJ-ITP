#include<stdio.h>
int main(){
	int c, r, x[101][101] = {}, i, j, k;
	scanf("%d %d", &c, &r);
	for(i=0; i<c; i++){
		for(j=0; j<r; j++){
			scanf("%d", &x[i][j]);
			x[i][r] += x[i][j];
		}
	}
	for(i=0;i<=r;i++){
		for(j=0;j<c;j++){
			x[c][i] += x[j][i];
		}
	}
	for(i=0;i<=c;i++){
		for(j=0;j<=r;j++){
			printf("%d", x[i][j]);
			if(j != r){
				printf(" ");
			}
		}
		printf("\n");
	}
}
