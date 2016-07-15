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
typedef long long ll;
int main()
{
	ll n;
	vector<ll> factor;
	cin >> n;
	for(ll i = 1; i <= sqrt(n); ++i)
		if(n % i == 0)
		{
			factor.push_back(i);
			cout << i << " ";
		}
	for(ll i = factor.size()-1; i >= 0; --i)
		if(n / factor[i] != factor[i])
			cout << n / factor[i] << " ";
	cout << endl;
}
