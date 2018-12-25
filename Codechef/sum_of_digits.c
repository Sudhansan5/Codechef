#include<stdio.h>
void main()
{   int t;
   scanf("%d",&t);
   while(t--)
   {
	int n,k,z,sum,c,m,x,b;
	printf("Enter the number\n");
	scanf("%d %d %d",&m,&n,&x);
	while(m<=n)
{
	z=m;
	while(z>9)
	{  // printf("\n%d\n",z);
	   b=z;
	  sum=0;
	  while(b!=0)
	   {
		sum=sum+b%10;
		b=b/10;
	//	printf("%d %d ",sum,b);
    	}
	 z=sum;
	 b=sum;
    }
    if(m==x || sum==x)
    {
	   c++;
       printf("%d ",m);
   }
   	m++;
}
	printf("\n%d",c);	
}
}
