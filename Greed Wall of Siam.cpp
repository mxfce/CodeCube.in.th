#include <iostream>
#include <iomanip>
#include <cstring> 
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
#define debug(x) cout << x << endl;
#define pf printf;
typedef long long ll;
ll gcd(ll a, ll b)
{
	if(a == 0)
		return b;
	gcd(b%a,a);
}
int main()
{
	int N;
	scanf("%d",&N);
	ll arr[N];
	for(int i = 0; i < N; ++i)
		scanf("%lld",&arr[i]);
	ll ngcd = gcd(arr[0],arr[1]);
	for(int i = 2; i < N; ++i)
		ngcd = gcd(ngcd,arr[i]);
	ll ans = 0;
	for(int i = 0;i < N; ++i)
		ans += arr[i] / ngcd;
	printf("%lld\n", ans);
}
