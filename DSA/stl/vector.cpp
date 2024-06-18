#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    vector<int> a(5,1);
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"size:-"<<v.size()<<endl;
    cout<<"capacity:-"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"size:-"<<v.size()<<endl;
    cout<<"capacity:-"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"size:-"<<v.size()<<endl;
    cout<<"capacity:-"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"size:-"<<v.size()<<endl;
    cout<<"capacity:-"<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"size:-"<<v.size()<<endl;
    cout<<"capacity:-"<<v.capacity()<<endl;

    cout<<"front:-"<<v.front()<<endl;
    cout<<"back:-"<<v.back()<<endl;

    cout<<"element at 2nd index:-"<<v.at(2)<<endl;

    cout<<"\nbefore clear size: "<<v.size()<<endl;
    v.clear();
    cout<<"\nafter clear size: "<<v.size()<<endl;
}