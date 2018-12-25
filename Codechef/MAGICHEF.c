#include<stdio.h>
void main()
{   int t;
    scanf("%d",&t);
    while(t--)
    {
    int n,x,s,i,a,b;
	scanf("%d %d %d",&n,&x,&s);
	for(i=1;i<=s;i++)
	{
		scanf("%d %d",&a,&b);
		if(a==x)
		    x=b;
		else if(b==x)
		       x=a;	
	}
	printf("%d\n",x);
}
}
