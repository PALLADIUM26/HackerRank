#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,c,d;
    cin>>a;
    cin>>b;
    cout<<a+b<<endl;
    if (a>b)
        cout<<a-b;
    else {
        cout<<b-a;
    }
    return 0;
}
