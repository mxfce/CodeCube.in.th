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
int main()
{
	int N;
	long long min = 2000000000;
	long long max =  -2000000000;
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		int k;
		cin >> k;
		if(k < min)
			min = k;
		if(k > max)
			max = k;
	}
	cout << max << endl;
	cout << min << endl;

}
