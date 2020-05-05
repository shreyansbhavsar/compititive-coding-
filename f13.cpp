#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;

    cin >> n ;
    cin >> m;
    vector<int> ls;
    while (m--){
        int i;
        cin >> i;
        ls.push_back(i);
    }
    int i = 0;

    for(auto l = ls.begin(); l != ls.end(); l++){
        cout << n-*l+1 -i << "\n";
        i++;

    }




    return 0;
}