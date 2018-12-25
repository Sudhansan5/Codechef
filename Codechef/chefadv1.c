#include<stdio.h>
void main()
{   int t;
    scanf("%d",&t);
    while(t--)
    {
    long int n,m,x,y,s1=1,s2=1,d1,d2;
	scanf("%ld %ld %ld %ld",&n,&m,&x,&y);
	while(n>s1)
		 s1=x+s1;
	//	if(s1 !=n)
	       s1=s1-x;
	    printf("%d\n",s1);
	while(m>s2)
	    s2=y+s2;
	  //  if(s2 !=m)
	       s2=s2-y;
	    printf("%d\n",s2);
	d1=n-s1;
	d2=m-s2;
	if(s1==n && s2==m)
	    printf("Chefirnemo\n");
	else if(d1==1 && d2==1)
	    printf("Chefirnemo\n");
	else
	    printf("Pofik\n");
}
}
