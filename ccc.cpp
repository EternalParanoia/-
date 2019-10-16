#include<stdio.h>
#include<cstdlib>
#include<math.h>
int main()
{
	int m,n,x,y;
	scanf("%d%d",&m,&n);
	if(m!=0&&n!=0)
	{
	y=(n/2)-m;
	x=m-y;
	printf("%d %d\n",int(x),int(y));
	}
	else
	printf("%d %d\n",int(m),int(n));
	
	return 0;
	
	
}