#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    str = str + ",";
    string num = "";
    vector<int> vect;
    for (int i=0; i<str.size(); i++){
        if(str.at(i) == ','){
            vect.push_back(stoi(num));
            num = "";
        }
        else{
            num = num + str.at(i);
        }
    }
    return vect;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
