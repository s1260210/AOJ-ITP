#include<stdio.h>
int main(){
	int s[100][100]={}, d[100]={},e[100], a, b, i, j;
	scanf("%d %d", &a, &b);
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d", &s[i][j]);
		}
	}
	for(i=0;i<b;i++){
		scanf("%d", &d[i]);
	}
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			e[i]=e[i]+s[i][j]*d[j];
		}
		printf("%d\n", e[i]);
	}
}
