#include <stdio.h>
#include <limits.h>
long GCD(int A,int B)
{
	if(B == 0)
		return A;
	GCD(B,A%B);
}
int main(int argc, char **argv)
{
	long a,b,_gcd;
	scanf("%ld %ld",&a,&b);
	_gcd = GCD(a,b);
	printf("%ld",a*(b/_gcd));
	return 0;
}
