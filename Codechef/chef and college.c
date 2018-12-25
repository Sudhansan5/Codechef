#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,q,i,d,b,c;
//	printf("Enter the value of n\n");
	scanf("%d",&n);
//	printf("Enter the number of queries\n");
	scanf("%d",&q);
	for(i=1;i<=q;i++)
	{
		scanf("%d %d %d",&d,&b,&c);
		if(d==0)
		{    
			a[b]=5;
			a[c]=5;
		}
		else
		 if(d==1)
		 {    
		 	if(a[b]==a[c])
		 	  	printf("YES\n");
		 	else
		        printf("NO\n");
		 }
	}
}
