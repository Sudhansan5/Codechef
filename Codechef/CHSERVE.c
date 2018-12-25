#include<stdio.h>
void main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int p1,p2,k,turn,s;
		scanf("%d %d %d",&p1,&p2,&k);
		turn=p1+p2;
		s=turn/k;
		if(s%2==0)
		  printf("CHEF\n");
		else
		  printf("COOK\n");
	}
}
