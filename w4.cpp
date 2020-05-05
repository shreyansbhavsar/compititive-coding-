// C++ Program to find the area 
// of triangle 
#include <bits/stdc++.h> 
using namespace std; 

float findArea(float a, float b, float c) 
{ 
	// Length of sides must be positive 
	// and sum of any two sides 
	// must be smaller than third side. 
	if (a < 0 || b < 0 || c < 0 || 
	(a + b <= c) || a + c <= b || 
					b + c <= a) 
	{ 
		cout << "Not a valid trianglen"; 
		exit(0); 
	} 
	float s = (a + b + c) / 2; 
	return sqrt(s * (s - a) * 
					(s - b) * (s - c)); 
} 

// Driver Code 
int main() 
{ int t,ans;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,ans,e;
		cin>>a>>b>>c>>d;
	int i,j,f;
	f=a;
	i=b;
	j=c;
	if (f+i<=j)
		{
			ans=j-(i+f);
			ans++;
			e=min(ans,b-a);
			f=f+e;
			if (f+i<=j)
			{
				ans=j-(f+i);
				ans++;
				e=min(ans,c-b)
				i=i+e;
			}
		}
		cout<<f<<" "<<i<<" "<<j<<endl;
	}
	return 0;
}