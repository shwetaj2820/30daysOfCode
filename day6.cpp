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
    for(int i=0; i<n; i++){
    string s;
    cin>>s;
    int sz = s.size();
    for(int k=0; k<sz; k+=2){
        cout<<s[k];
    }
    
    cout<<" ";
    
    for(int m=1; m<sz; m+=2){
        cout<<s[m];
    }
    
    cout<<"\n";
    }
      
    return 0;
}
