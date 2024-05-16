// 6
// 1 4 6 2 8 9
// 2
// 2 4



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, input;
    vector<int> ans;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin >> input;
        ans.push_back(input);
    }
    int position;
    cin >> position;
    ans.erase(ans.begin()+(position - 1));
    
    int start,end;
    cin>>start>>end;
    ans.erase(ans.begin()+(start - 1),ans.begin()+(end - 1));
    
    cout << ans.size() << "\n";
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
    
}