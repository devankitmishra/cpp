#include<iostream>
#include<vector>
using namespace std;



int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int minPrice = INT_MAX;
        int profit = 0;
        for(int i = 1; i <= prices.size(); i++){
            minPrice = min(minPrice,prices[i]);
            
            profit = max(profit,prices[i]-minPrice);
            
        }
        cout<<profit<<endl;
}