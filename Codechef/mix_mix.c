#include<stdio.h>
void main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	long int n,z1,z2,a[100],i;
		scanf("%ld %ld %ld",&n,&z1,&z2);
		for(i=0;i<n;i++)
		  scanf("%ld",&a[i]);
		if(a[0] ==(z1||z2) || a[1]==(z1 || z2))
		printf("1\n");		
		else if(((-a[0]+a[1]) || (-a[1]+a[0]) ==(z1 || z2)) && (a[0]+a[1])==(z1 || z2))
		 printf("2\n");
		 else
		  printf("0\n");
		  
		  
	}
}
