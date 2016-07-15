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
	int prob[3];
	int highest_prob = -1;
	int cnt_highest = 0;
	int sum_prob = 0;
	for(int i = 0; i < 3; ++i)
	{
		scanf("%d",&prob[i]);
		sum_prob += prob[i];
		if(prob[i ]== highest_prob)
			cnt_highest++;
		else if(prob[i] > highest_prob)
		{
			highest_prob = prob[i];
			cnt_highest = 1;
		}
	}
	if(sum_prob != 100)
		printf("BUG\n");
	else if(cnt_highest > 1)
		printf("I DON'T KNOW\n");
	else
		if(highest_prob == prob[0])
			printf("PAPER\n");
		else if(highest_prob == prob[1])
			printf("SCISSORS\n");
		else
			printf("ROCK\n");


}
