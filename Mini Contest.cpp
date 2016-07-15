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
	int SIZE;
	scanf("%d",&SIZE);
	char text[SIZE];
	char ans[20] = "Accepted";
	scanf("%s",text);
	for(int i = 0;i < SIZE-1; ++i)
		if(text[i] == text[i+1])
			strcpy(ans,"Wrong Answer");
	printf("%s\n", ans);
}
