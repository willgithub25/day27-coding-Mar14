#include <stdio.h>

int main(void) {

	int T;
	scanf("%d",&T);
	while(T--)
	{
	    long int n,i,sum=0;
	    scanf("%ld",&n);
	    long int a[n];
	    for(i=0;i<n;i++)
	    scanf("%ld",&a[i]);
	    for(i=0;i<n;i++)
	    sum=sum+a[i];
	    for(i=0;i<n;i++)
	    printf("%ld",sum-a[i]);
	}
	return 0;
}

