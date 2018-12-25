#include<stdio.h>
void main()
{   int t;
    scanf("%d",&t);
    while(t--)
    {
    long int n,m,x,y,r1,r2;
	scanf("%ld %ld %ld %ld",&n,&m,&x,&y);
	r1=n%x;
	r2=m%y;
	if(x==1 && y==1)
	    printf("Chefirnemo\n");
	else if(n==1 || n==2)
	         {
	         	if(m==n)
	         	   printf("Chefirnemo\n");
	         	else
	         	   printf("Profik\n");;
			 }
    else if(r1==1 || r1==2)
	     {
	     	if(r2==r1)
	     	   printf("Chefirnemo\n");
	     	else
	     	   printf("Profik\n");
		   } 
    else
	           printf("Profik\n"); 
	  }
}
