#include <iostream>
using namespace std;
int main(){
	int n;
    int t=1;
	cin>>n;
	while(n>=0){
        n=n-t;
        if(n<=0)
        {
            cout<<"Patlu";
        break;
        }
        n=n-(t*2);
        if(n<=0){
            cout<<"Motu";
            break;
        }
        t++;
    }
}