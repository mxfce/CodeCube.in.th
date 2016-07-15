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
	int N;
	scanf("%d",&N);
	int cnt = 0;
	for(int i = 0; i < N; ++i)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		if(coor[x][y] == 0)
			cnt++;
		coor[x][y] = 1;
	}
	printf("%d\n", cnt);
}
