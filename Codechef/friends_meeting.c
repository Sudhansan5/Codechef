#include <stdio.h>

int main(void) {
     int t;
     scanf("%d",&t);
     while(t--)
     { 
	 int a[100],i,min=111,f=0,n;
     	scanf("%d",&n);
     	for(i=0;i<n;i++)
     	{
     		scanf("%d",&a[i]);
     		if(a[i]==1)
     		f=1;
     		if(min>a[i])
     		min=a[i];
		 }
		 if(f==1)
		 printf("%d\n",min);
		 else 
		 printf("-1");
	 }
	return 0;
}


