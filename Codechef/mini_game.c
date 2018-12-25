#include<stdio.h>
void main()
{   int t;
    scanf("%d",&t);
while(t--)
{
    int n,k,a[50000],odd=0,even=0,sum=0,i,s,sum1,s1;

	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&a[i]);
	    if(i%2==0)
	      even=even+a[i];
	    else
	    	odd=odd+a[i];
    }
    sum=odd-even;
    sum1=even-odd;
    s=abs(sum);
    s1=abs(sum1);
    if(s>=k || s1>=k)
     printf("1\n");
    else
     printf("2\n");
}
}
