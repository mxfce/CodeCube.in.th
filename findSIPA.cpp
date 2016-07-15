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
	char S[1007];
	scanf("%s",S);
	char key[] = "sipa";
	int N = strlen(S) ,ans = 0 ,i;
	for(i = 0 ; i < N; ++i)
	{
		int cnt_correct = 0;
		char sipa[5];
		sipa[5] = '\0';
		for(int j = 0; j < 4; ++j)
		{
			if(tolower(key[j]) == tolower(S[i+j]))
			{
				cnt_correct++;
				sipa[j] = S[i+j];
			}
			else
				break;
		}
		if(cnt_correct == 4)
		{
			printf("\"%s\"",sipa);
			i+=3;
			ans++;
		}
		else
			printf("%c",S[i]);
	}
	printf("\n%d\n",ans);
	return 0;
}
