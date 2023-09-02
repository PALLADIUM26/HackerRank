#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student{
    public:
        int a, s;
        string s1, s2;
        
        void set_age(int age){
            a = age;
        }
    
        void set_standard(int standard){
            s = standard;
        }
    
        void set_first_name(string first_name){
            s1 = first_name;
        }
    
        void set_last_name(string last_name){
            s2 = last_name;
        }
    
        int get_age(){
            return a;
        }
    
        string get_last_name(){
            return s2;
        }
    
        string get_first_name(){
            return s1;
        }
        
        int get_standard(){
            return s;
        }
        
        void to_string(){
            cout<<a<<","<<s1<<","<<s2<<","<<s;
            // return a + "," + s1+ "," + s2+ "," +s;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    // cout << st.to_string();
    st.to_string();
    
    return 0;
}
