#include<stdio.h>
void main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,i,j,c,w,inv;
		char a[100],one[100];
		char cond[10];
		scanf("%d %d",&n,&m);
		for(i=0;i<n;i++)
		{
			scanf("%s",cond);
			scanf("%s",a);
			for(i=0;i<m;i++)
			{
				printf("%s",a[i]);
			}
		/*	if(strcmp(a,""))	
		 if(strcmp(cond,"correct")==0 && c!=m)
		    inv++;
		 else if(strcmp(cond,"wrong")==0 && (c==m))
		     w++;	     
		}
		if(inv>0)
		  printf("INVALID\n");
		else if(w>0)
		  printf("WEAK\n");
		  else
		   printf("FINE\n");
	*/}	
	}
}
