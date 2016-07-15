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
	int M,N,cnt = 0;
	scanf("%d %d",&M,&N);
	char* alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int index = 0;
	for(int i = 0; i < M; ++i)
	{
		for(int j = 0; j < N; j++)
			printf("%c",alpha[index++ % 26]);
		printf("\n");
	}

}
