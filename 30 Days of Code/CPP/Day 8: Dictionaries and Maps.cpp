#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    string name;
    long phone;
    cin>>n;
    map<string,long> myMap;
    for(int i=0;i<n;i++)
    {
        cin>>name>>phone;
        //myMap[name]=phone;
        myMap.insert(pair<string,long>(name,phone));
    }
    while(cin>>name)
    {
        if(myMap.find(name)!=myMap.end())
            cout<<name<<"="<<myMap.find(name)->second<<endl;
        else    cout<<"Not found"<<endl;
    }  
    return 0;
}
