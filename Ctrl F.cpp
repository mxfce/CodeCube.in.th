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
	int N,M,cnt = 0;
	scanf("%d %d",&N,&M);
	char text[N],key[M];
	scanf("%s \n %s",text,key);
	for(int i = 0; i <= N - M; ++i)
	{
		int j;
		for(j = 0; j < M; ++j)
		{
			if(key[j] != text[i+j])
				break;
		}
		if(j == M)
			cnt++;
	}
	printf("%d\n", cnt);
}
