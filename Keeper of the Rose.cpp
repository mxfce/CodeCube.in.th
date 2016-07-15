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
	int N,M;
	scanf("%d %d",&N,&M);
	int cnt_flow = 0;
	int flow_cycle[N + 1];
	int penalty_pos[N + 1];
	for(int i = 1; i <= N; ++i)
	{
		int growth_cycle;
		scanf("%d",&growth_cycle);
		flow_cycle[i] = growth_cycle;
		penalty_pos[i] = 0;
	}
	for(int days = 1; days <= M; ++days)
	{
		int picked_flow;
		scanf("%d",&picked_flow);
		if(days - penalty_pos[picked_flow] >= flow_cycle[picked_flow])
		{
			cnt_flow++;
			penalty_pos[picked_flow] = days;
		}
	}
	printf("%d\n",cnt_flow);
	return 0;
}
