#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    getline(cin,a);
    getline(cin,b);
    
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    string s = b[0]+ a.substr(1)+ " "+a[0]+b.substr(1);
    cout<<s;
  
    return 0;
}
