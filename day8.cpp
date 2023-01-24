#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,string>phBook;
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
        string name;
        string number;
        cin>>name>>number;
        phBook[name] = number;
    }
    
    map<string,string>::iterator it;
    
    string query;
    while(cin>>query){
        it=phBook.find(query);
        
        if(it!=phBook.end()){
            cout<<it->first<<"="<<it->second<<endl;
        }
        
        else{
            cout<<"Not found"<<endl;
        }
    }
    return 0;
}
