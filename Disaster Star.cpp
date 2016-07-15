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

int main()
{
	int N;
	scanf("%d",&N);
	int space  = (N-1)/2;
	int star = 1;
	for(int i = 0; i < N; ++i)
	{
		for(int j = 0; j < space; ++j)
			printf("-");
		for(int j = 0; j < star; ++j)
			printf("*");
		for(int j = 0; j < space; ++j)
			printf("-");
		printf("\n");
		if(i < N/2)
		{
			star += 2;
			space--;
		}
		else
		{
			star -= 2;
			space++;
		}
	}
}
