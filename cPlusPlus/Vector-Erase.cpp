#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    
    vector <int> v;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int x;
    cin>>x;
    v.erase(v.begin()+x-1);
    int  y, z;
    cin>>y;
    cin>>z;
    v.erase(v.begin()+y-1,v.begin()+z-1);
    
    cout<<v.size()<<endl;
    
    
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
      
    return 0;
}
