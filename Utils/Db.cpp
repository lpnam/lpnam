#define BASIC_LENGH 57;
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>  
#include <string>
using namespace std;

string USER = "User";
string FN   = "FirstName";
string LN   = "LastName";
string EM   = "Email";
string PN   = "PhoneNumber";

map<string, string> mp;
vector<map<string, string>> vm;
map<string, string>::iterator itr;

void showList(){
    cout << endl;
    for (int i =0; i < vm.size();i++){
        cout << "||";
        for(auto x:vm[i]){
            cout << x.first << ": " << x.second << "||";
        } 
        cout << endl;    
    }
    cout << endl;
}

string input(string keyName){
    string value;
    cout << keyName <<": ";
    cin >> value;
    return value;
}

