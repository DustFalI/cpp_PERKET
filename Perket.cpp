#include <bits/stdc++.h>
using namespace std;
int n, s[15], b[15], ans = 1000000000;
void f(int sd, int bd, int step)
{
	if(step == n)
	{
		int tmp;
		tmp = abs(sd - bd);
		if(tmp < ans && bd != 0) ans = tmp;
		return;
	}
	step++;
	f(sd*s[step], bd+b[step], step);
	f(sd, bd, step);
}
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> s[i] >> b[i];
	f(1,0,0);
	cout << ans;
	return 0;
}
