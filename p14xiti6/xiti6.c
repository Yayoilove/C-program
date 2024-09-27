#include<stdio.h>
int main()
{	
	int max(int x, int y ,int h);
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	d = max(a, b ,c);
	//f = max(d, e);
	printf("最大值为%d\n",d);
	return(0);
}

int max(int x, int y,int h)
{
	int z,u;
	if (x > y)z = x;
	else z = y;
	if (z > h)u = z;
	else u = h;
	return(u);
}
