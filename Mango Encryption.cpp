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
int check(char a,char b)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	a = tolower(a);
	b = tolower(b);
	int p1 = a - 'a',p2 = b - 'a';
	for(int i = 0;i <= 9; ++i)
		if(alpha[(p1 + i) % 26] == b)
			return i;
	return -1;
}
int main()
{
	char original_word[1000005];
	char encrypt_word[1000005];
	string ans = "";
	scanf("%s\n%s",original_word,encrypt_word);
	if(strlen(original_word) == strlen(encrypt_word))
	{
		int L = strlen(original_word);
		for(int i = 0; i < L; ++i)
		{
				int key2 = check(encrypt_word[i],original_word[i]);
				if(key2 > -1)
					ans.append(to_string(key2));
				else
				{
					ans = "R.I.P.";
					break;
				}
		}
	}
	else
		ans = "R.I.P.";
	cout << ans << endl;
}
