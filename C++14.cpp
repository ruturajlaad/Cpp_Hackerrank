#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
/////////////////SOLUTION////////////////////////////////////
class Student{
    private:
        int age;
        int standard;
        string first_name;
        string last_name;
    
    public:
    //set functions
    void set_age(int iage){
        age=iage;
        }
        
    void set_standard(int istd){
        standard=istd;
        }
        
    void set_first_name(const string& nfs){
        first_name=nfs;
        }
        
    void set_last_name(const string& nls){
        last_name=nls;
        }
        
    //get functions
    int get_age() const{
        return age;
        }
        
    int get_standard() const{
        return standard;
        }
    string get_first_name() const{
        return first_name;
        }
        
    string get_last_name() const{
        return last_name;
        }
        
    string to_string() const{
        stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};
////////////////////////////////////////////////////////////////////
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
    cout << st.to_string();
    
    return 0;
}
