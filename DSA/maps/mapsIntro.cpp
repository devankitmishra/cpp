#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    //creation
    unordered_map<string, int> m;
    // map<string, int> m;


    //insertion

    //1
    pair<string,int> p = make_pair("babbar",3);
    m.insert(p);

    //2
    pair<string,int> p2("love",2);
    m.insert(p2);

    //3
    m["mera"] = 1;
    //what will happen
    m["mera"] = 2;

    //search
    cout<<m["mera"]<<endl;
    cout<<m.at("babbar")<<endl;

 
    cout<<m.at("unknownkey")<<endl; //gives error
    cout<<m["unknownkey"]<<endl;    //creates an entry for unkownkey 0

    //size
    cout<<m.size()<<endl;

    //to check presence
    cout<<m.count("love")<<endl;

    //erase
    m.erase("love");
    cout<<m.size()<<endl;

    //iterater
    unordered_map<string,int> :: iterator it = m.begin();
    // map<string,int> :: iterator it = m.begin();
    while (it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
    }
    

    return 0;

}