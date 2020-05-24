#include <stdio.h>
 
 
int gcd ( long int a, long int b )
{
  long int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}
 
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long int A,B;
		scanf("%ld%ld",&A,&B);
		long int G = gcd(A,B);
		printf("%ld %ld\n",G,A*B/G);
	}
	return 0;
}
 