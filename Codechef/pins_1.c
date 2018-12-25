#include<stdio.h>
void main()
{   int t;
    scanf("%d",&t);
    while(t--)
    {
     int n,i;
	printf("Enter length of pin\n");
	scanf("%d",&n);
	printf("1 1");
	for(i=0;i<n/2;i++)
	    printf("0");
	printf("\n");
    }
}
