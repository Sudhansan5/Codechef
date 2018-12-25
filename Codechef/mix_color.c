#include<stdio.h>
void main()
{
	int i,j,n,a[100],c;
	printf("How many numbers you wanna enter??\n");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(j=0;j<i;j++)
		{
			if(a[j]==a[i])
			{
				c++;
			}
		}
	}
	printf("%d",c);
}
