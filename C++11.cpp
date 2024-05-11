#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
////////////Solution///////////////////

vector<int> parseInts(string str) {
	// Complete this function
    vector<int>ans;//create vector ans
    
    stringstream ss(str);
    char ch;
    int num;
    //Loop through str
    while(ss>>num){
    ans.push_back(num);
    ss>>ch;    
    }
    return ans;
    
    
}
/////////////////////////////////////////
int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
