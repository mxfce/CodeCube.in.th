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
static int coor[1007][1007];
int main()
{
	int target;
	scanf("%d",&target);
	int score[5];
	int sum = 0;
	for(int i = 0; i < 5; ++i)
	{
		scanf("%d",&score[i]);
		sum += score[i];
	}
	int i;
	for(i = 0; i < 5; ++i)
	{
		if(sum == target)
			break;
		if(sum - score[i] == target)
		{
			score[i] = 0;
			break;
		}
	}
	if(i < 5)
		for(int i = 0; i < 5; ++i)
			printf("%d ", score[i]);
	else
		printf("-1\n");
}
