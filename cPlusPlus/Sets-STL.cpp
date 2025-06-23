#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int>s;
    int n;
    int a, b;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>a;
        cin>>b;
        if(a==1){
            set<int>::iterator itr=s.find(b);
            if(itr == s.end())
                s.insert(b);
        }
        if(a==2){
            set<int>::iterator itr=s.find(b);
            if(itr != s.end())
                s.erase(b);
        }
        if(a==3){
            set<int>::iterator itr=s.find(b);
            if(itr == s.end())
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    }
    return 0;
}



