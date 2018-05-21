#include<stdio.h>
int main(){
	int n ,j=1;
	scanf("%d", &n);
	while(n!=0 && j!=10001){
		printf("Case %d: %d\n",j ,n);
		scanf("%d", &n);
		j++;
	}
}
