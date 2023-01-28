#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
string toBinary(int n){
    string bString;
    while(n!=0){
        bString = (n%2 ? "0":"1")+bString;
        n=n/2;
    }
    return bString;
}

int countOnes(string bString, int sz){
    int max=0,temp=0;
    for(int i=0; i<sz; i++){
        if(bString.substr(i,1)=="1"){
            temp++;
            if(temp>max){
                max=temp;
            }
        }
        
        else{
            temp=0;
        }
    }
    return max;
}*/
int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    int count=0, max=0;
    while(n>0){
        if(n%2==1){
            count++;
        }
        else{
            if(count>max){
                max=count;
                count=0;
            }
        }
        n=n/2;
    }
    
    if(count>max){
        max=count;
    }
    
    cout<<max;
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
