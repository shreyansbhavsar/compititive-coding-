 #include <bits/stdc++.h> 
using namespace std; 
  
void block(long int x) 
{ 
    vector<long int> v;
    while (x > 0)  
    { 
        v.push_back(x % 2); 
        x = x / 2; 
    } 
    long int s=0; 
    for (int i = 0; i < v.size(); i++)  
    { 
        if (v[i] == 1)  
        { 
            s=s+i; 
        } 
    } 
    cout << s << endl; 
} 
   
int main() 
{ 
      int t;
    cin>>t;
    while(t--)
    {
        int n,s=0;
        cin>>n;
        block(n);
    }
    return 0; 
} 