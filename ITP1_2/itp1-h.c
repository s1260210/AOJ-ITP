#include<stdio.h>
int main() {
	int w, h, a, b, c;
	scanf("%d%d%d%d%d", &w, &h, &a, &b, &c);
	if((a+c<=w && a+c>=0) && (b+c<=h && b+c>=0) && (a>0 && b>0)){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
}
