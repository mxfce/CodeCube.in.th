#include <iostream>
#include <iomanip>
#include <cstring> 
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
long gcd(long a,long b)
{
	if(a == 0)
		return b;
	gcd(b%a,a);
}
int main()
{
	int n;
	scanf("%d",&n);
	long arr[n];
	for(int i = 0; i < n; ++i)
		scanf("%ld",&arr[i]);
	long ans = (arr[0] / gcd(arr[0],arr[1])) * arr[1];
	for(int i = 2; i < n; ++i)
		ans = (ans / gcd(ans,arr[i])) * arr[i];
	printf("%ld",ans);
	return 0;
}
