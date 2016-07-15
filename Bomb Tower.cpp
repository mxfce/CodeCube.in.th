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
const int size = 500000+7;
int countPrime(int n)
{
	static int composite[size];
	int cnt = 0;
	for(int i = 2; i <= sqrt(n); ++i)
	{
		if(composite[i] == 0)
		{
			cnt++;
			for(int j = i + i; j <= n; j += i)
				composite[j] = 1;
		}
	}
	for(int i = sqrt(n)+1; i <= n; ++i)
		if(composite[i] == 0)
			cnt++;
	return cnt;
}
int main()
{
	int n,bomb;
	scanf("%d\n%d",&n,&bomb);
	int minBomb = countPrime(n);
	if(bomb >= minBomb)
		printf("0\n");
	else
		printf("%d\n", minBomb - bomb);
}
