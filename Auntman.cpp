#include <iostream>
#include <iomanip>
#include <cstring> 
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
int N,M;
int check(vector<vector<char> > vec,int i,int j)
{
	int cnt = 0;
	if(vec[i][j] == 'A')
		cnt++;
	return cnt;
}
int boomX(vector<vector<char> > &vec,int i ,int j)
{
	int sum = 0;
	sum += check(vec,i,j);
	vec[i][j] = 'd';
	for(int k = 1; k <= 2; ++k)
	{
		if(j - k >= 0 && i - k >= 0)
		{
			sum += check(vec,i - k,j - k);
			vec[i - k][j - k] = 'd';
		}
		if(j+k < M && i-k >= 0)
		{
			sum += check(vec,i - k,j + k);
			vec[i - k][j + k] = 'd';
		}
		if(j - k >= 0 && i + k < N)
		{
			sum += check(vec,i + k,j - k);
			vec[i + k][j - k] = 'd';
		}
		if(j + k < M && i + k < N)
		{
			sum += check(vec,i + k,j + k);
			vec[i + k][j + k] = 'd';
		}
	}
	return sum;
}
int boomPlus(vector<vector<char> > &vec,int i ,int j)
{
	int sum = 0;
	sum += check(vec,i,j);
	vec[i][j] = 'd';
	
	if(i > 0)
	{
		sum += check(vec,i - 1,j);
		vec[i - 1][j] = 'd';
	}
	if(j >  0)
	{
		sum += check(vec,i,j - 1);
		vec[i][j - 1] = 'd';
	}
	if(j < M-1)
	{
		sum += check(vec,i,j + 1);
		vec[i][j + 1] = 'd';
		
	}
	if(i < N - 1)
	{
		sum += check(vec,i + 1,j);
		vec[i + 1][j] = 'd';
	}
	return sum;
}
int main()
{
	int ans = 0;
	scanf("%d %d",&N,&M);
	vector<vector<char> > board(N,vector<char>(M));
	for(int i = 0;i < N; ++i)
		for(int j = 0; j < M; ++j)
		{
			char tmp;
			cin >> tmp;
			if(tmp == 'x')
				ans -= boomX(board,i,j);
			else if(tmp == '+')
				ans -= boomPlus(board,i,j);
			else if(tmp == 'A' && board[i][j] != 'd')
			{
				board[i][j] = tmp;
				ans++;
			}
			else if(tmp == '.')
				board[i][j] = '.';
				
		}
	cout << ans << endl;
	for(int i = 0;i < N; ++i)
	{
		for(int j = 0; j < M; ++j)
		{
			if(board[i][j] == 'd')
				cout << '.';
			else
				cout << board[i][j];
		}
		cout << endl;
	}
    return 0;
}
