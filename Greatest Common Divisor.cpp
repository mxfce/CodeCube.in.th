#include <iostream>
#include <iomanip>
#include <cstring> 
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
long gcd(long long a,long long b)
{
	if(a == 0)
		return b;
	gcd(b%a,a);
}
int main()
{
	long long a,b;
	scanf("%lld %lld",&a,&b);
	printf("%lld",gcd(a,b));
	return 0;
}
