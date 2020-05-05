#include<bits/stdc++.h>
using namespace std;
	int main(){    
    int n;
    int a;
    int z = 0, o = 0; 
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a;
        if(a== 0){
            z++;
        }
        else{
            o++;
        }
    }
    if(o){
        cout << "HARD\n";
    }
    else{
        cout << "EASY\n";
    }
 
    return 0;

}