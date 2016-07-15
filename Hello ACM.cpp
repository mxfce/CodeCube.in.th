#include <iostream>
#include <iomanip>
#include <cstring> 
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
int main()
{
	int test_cases;
	scanf("%d",&test_cases);
	for(int i = 1; i <= test_cases; ++i)
	{
		int total_time,target_time,cnt = 0;
		scanf("%d %d",&total_time,&target_time);
		for(int j = 0; j <= target_time/20; j++)
		{
			int used_time = target_time - (20 * j);
			if(used_time <= total_time)
				cnt++;
		}
		printf("Case #%d: %d\n",i,cnt);
	}
	return 0;
}
