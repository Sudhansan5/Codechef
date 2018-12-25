#include<stdio.h>
#include<math.h>
void main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{   
	   long long int n,q,r,m,bits=0,nibble=0,byte=0;
		scanf("%lld",&m);
		n=m-1;
		if(n>=26)
		{
			q=n/26;
			bits=pow(2,q);
			r=n%26;
			if(r>=2 && r<10)
			{
				nibble=bits;
				bits=0;
			}
			else if(r>=10 && r<26)
			{
				byte=bits;
				nibble=0;
				bits=0;
			}
		}
		else if(n<26 && n>=10)
		       byte++;
	    else if(n<10 && n>=2)
	           nibble++;
	    else
	           bits++;
	    printf("%lld %lld %lld\n",bits,nibble,byte);
	}
	
	
}
