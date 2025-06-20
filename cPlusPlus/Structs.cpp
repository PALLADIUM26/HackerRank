#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <string>

/*
    add code for struct here.
*/
class Student{
    public:
        int age;
        string first_name;
        string last_name;
        int standard;
        // Student(){
        //     age = 15;
        //     first_name = "john";
        //     last_name = "carmack";
        //     standard = 10;
        // }
};

int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}
