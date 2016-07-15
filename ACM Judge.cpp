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
	int t;
	cin >> t;
	string error_flag[3] = {"No - Runtime error","No - Time limit exceeded","No - Wrong answer"};
	for(int i = 0; i < t; ++i)
	{
		string test_case;
		cin >> test_case;
		int len = test_case.length();
		bool error_prior[3] = {false};
		int point = 0;
		for(int j = 0; j < len; ++j)
		{
			if(test_case[j] == 'P')
				point++;
			else if(test_case[j] == 'X')
				error_prior[0] = true;
			else if(test_case[j] == 'T')
				error_prior[1] = true;
			else if(test_case[j] == '-')
				error_prior[2] = true;

		}
		int itr = 0;
		if(point == len)
			cout << "Case #" << i+1 << ": Yes" << endl;
		else
		{
			while(error_prior[itr] == false)
				itr++;
			cout << "Case #" << i+1 << ": " <<  error_flag[itr] << endl;
		}
	}
}
