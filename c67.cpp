#include <iostream>
using namespace std;
bool vowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    return true;
    return false;
}
int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        int count=0;
        for(int i=0;i<n-1;i++)
        {
         int j=i+1;
          if(!vowel(s[i]) && vowel(s[j]))
             count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
