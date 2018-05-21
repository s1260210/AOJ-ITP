#include<stdio.h>
int main(){
	int a, b, c, d;
	double e;
	scanf("%d%d", &a, &b);
	c=a/b;
	d=a%b;
	e=1.0*a/b;
	printf("%d ",c);
	printf("%d ",d);
	printf("%.5f\n",e);
	return 0;
}
