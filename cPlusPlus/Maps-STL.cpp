#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    
    map<string, int> m;
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        string x;
        cin>>x;
        
        if(q == 1){
            int y;
            cin>>y;
            map<string,int>::iterator itr=m.find(x);
            if (itr==m.end())
            m[x] = y;
            else
            m[x] += y;
        }
        if(q == 2)
            m.erase(x);
        
        if(q == 3)
            cout<<m[x]<<endl;
    }
    
       
    return 0;
}



