#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <D:/K1/Utils/Data.cpp>

using namespace std;

int main() {
    setupExistingData();
    string x1 = "1.Add new Users";
    string x2 = "2.Remove Users";
    string x3 = "3.Show List User";
    string x4 = "4.Exit";

    cout << x1 << endl;
    cout << x2 << endl;
    cout << x3 << endl;
    cout << x4 << endl;
    
    while (true) {
        int indexSelect;
        cout << "Select your option: ";
        cin >> indexSelect;
        if (indexSelect = 3){
            showList();
        }
        else if (indexSelect = 1)
        {
            int numUser;
            cout << "Number of User: ";
            cin >> numUser;
            DataDetals dts;
            dts.inputUserData(numUser);
        }
        else if (indexSelect = 2)
        {
            showList();
        }
        else if (indexSelect >= 4) {
            break;
        }
    }

}
        

