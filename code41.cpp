#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,Q;
	cin >> N >> Q;
	int a[N];
	for(int i=0;i<N;i++)
	{
		cin >> a[i];
	}
	while(Q--)
	{
		int L,R;
		cin >> L >> R;
		
		if(a[L]-a[L-1]!=0 && a[R-1]-a[R-2]!=0)
		cout << "NO" << endl;
		else
		cout << "YES" << endl;
	}
}