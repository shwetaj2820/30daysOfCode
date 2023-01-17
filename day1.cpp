#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<iomanip>
#include <algorithm>
using namespace std;



int main() {
    
    int i=4;
    double d=4.0;
    string s="HackerRank";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int a;
    double b;
    string c;
    
    cin>>a>>b;
    getline(cin,c);
    getline(cin,c);
    
    cout<<(a+i)<<endl;
    
    cout<<setprecision(1)<<fixed<<(b+d)<<endl;

    cout<<s<<" "<<c<<endl; 
    return 0;
    
    
}
