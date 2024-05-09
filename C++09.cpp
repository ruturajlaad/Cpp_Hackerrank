#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    //Accept input
    int n,q;
    cin>>n>>q;
    //Declare array
    vector<vector<int>>a(n);
     
    //Assign elements to the array
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        a[i].resize(k); //resize the k accordingly
        for (int j = 0; j < k;j++) {
            cin >> a[i][j]; 
        }
    }
    //Queries
    for(int i=0;i<q;i++){
        int ind,k;
        cin>>ind>>k;
        
        cout<<a[ind][k]<<endl;//output your answer
    }
    
    return 0;
}
