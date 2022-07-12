#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include "Db.cpp"
using namespace std;

class DataDetals
{
    private:
    public:
        string user;
        string firstName;
        string lastName;
        string email;
        string phoneNumber;

        DataDetals(){};

        DataDetals(string userr, string first_name,string last_name,string emaill,string phone_number){
            user           = userr;
            firstName      = first_name;
            lastName       = last_name;
            email          = emaill;
            phoneNumber    = phone_number;
        };

        void addDataUser(DataDetals dataDetals){
            // mp.insert(pair<string, string>(USER,dataDetals.user));
            // mp.insert(pair<string, string>(FN,dataDetals.firsName));
            // mp.insert(pair<string, string>(LN,dataDetals.lastName));
            // mp.insert(pair<string, string>(EM,dataDetals.email));
            // mp.insert(pair<string, string>(PN,dataDetals.phoneNumber));
            mp[USER]    = dataDetals.user;
            mp[FN]      = dataDetals.firstName;
            mp[LN]      = dataDetals.lastName;
            mp[EM]      = dataDetals.email;
            mp[PN]      = dataDetals.phoneNumber;

            vm.push_back(mp);
            mp.clear();
};
        void inputUserData(int numberOfUser){
            for (int i = 1; i <= numberOfUser; i ++){
                cout << "Input Data For User "<< i << endl;
                user         = input("User");
                firstName    = input("FirstName");
                lastName     = input("LastName");
                email        = input("Email");
                phoneNumber  = input("PhoneNumber");

                DataDetals dts = DataDetals(user, firstName, lastName, email, phoneNumber);
                addDataUser(dts);
            }
           
};

};

void setupExistingData (){
    DataDetals dt1 = DataDetals("test1", "firstname1","lastname1","email1@gmail.com","34896856826478");
    DataDetals dt2 = DataDetals("test2", "firstname2","lastname2","email2@gmail.com","34895678234278");
    DataDetals dt3 = DataDetals("test3", "firstname3","lastname3","email3@gmail.com","34895678235544");
    DataDetals dt4 = DataDetals("test4", "firstname4","lastname4","email4@gmail.com","34895678354345");
    DataDetals dt5 = DataDetals("test5", "firstname5","lastname5","email5@gmail.com","34895678234344");
    dt1.addDataUser(dt1);
    dt2.addDataUser(dt2);
    dt3.addDataUser(dt3);
    dt4.addDataUser(dt4);
    dt5.addDataUser(dt5);
}
