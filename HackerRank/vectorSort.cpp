#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,x;
    cin>>n;
    vector<int> ans; 
    for(int i = 0; i < n; i++){
        cin >> x;
        ans.push_back(x);
    }
    sort(ans.begin(),ans.end());
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    return 0;   
}
