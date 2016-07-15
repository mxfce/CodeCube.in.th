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
int main()
{
	int N;
	scanf("%d",&N);
	if(N % 2 != 0)
	{

		int first = N;
		int space = 0;
	
			for(int i = 0; i < N; ++i)
			{
				for(int j = 0; j < space; ++j)
					printf(" ");
				for(int j = 0; j < first; ++j)
					printf("*");
				printf("\n");
				if(i < N/2)
				{
					first-=2;
					space++;
				}
				else
				{
					first += 2;
					space --;
				}
			}
		
	}
	else
		printf("error\n");
}
