#include<stdio.h>
void main()
{   int t;
    scanf("%d",&t);
    while(t--)
    {
    long int n,m,x,y,s1=1,s2=1,d1,d2;
	scanf("%ld %ld %ld %ld",&n,&m,&x,&y);
	if(x==1)
	   {
	     s1=n+x+5;
	     if(y>m)
	      {
		  d2=5;
		  s2=m+y+5;
	      }
	   }
	if(y==1)
	{
	   s2=m+y+5;
	   if(x>n)
	      {
		  d1=5;
		  s1=n+x+5;
	      }
    }
        while(n>=s1)
            s1=x+s1;
        while(m>=s2)
            s2=y+s2;
        d1=n+x-s1;
               printf("%d\n",d1);
        d2=m+y-s2;
               printf("%d\n",d2);
    if(x==1)
      {
      	if(d2==0 || d2==1)
      	   printf("Chefirnemo\n");
      	else
      	   printf("Pofik\n");
	  }
	else if(y==1)
	  {
	  	if(d1==0 || d1==1)
	  	   printf("Chefirnemo\n");
	  	else
	  	   printf("Pofik\n");
	  }
    else if((d1==0 && d2==0) || (d1==1 && d2==1))
	     	   printf("Chefirnemo\n");
	    else
	           printf("Pofik\n"); 
	  }
}
