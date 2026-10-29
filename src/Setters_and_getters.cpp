#include <bits/stdc++.h>
using namespace std;
class clsPerson
{
private:
  	string _FirstName ;
    string _LastName ;
    int _Age;


    // it s a read-only property here , ;
    void setAge(int age){

        _Age = age;
    }

public:
    void setFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }
    string GetFirstName() {

           return _FirstName;
    }
    void setLastName(string LastName) {

            _LastName = LastName;
    }
    string GetLastName()
    {
        return _LastName;
    }
    string FullName()
    {
        return _FirstName + " " + _LastName;
    }

    int Age(){
        return _Age;
    }

    __declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;

};

int main()
{
    clsPerson Person1;
    Person1.setFirstName("Sami");
    Person1.setLastName("Mezghani");
    cout << "First Name:" << Person1.GetFirstName() << endl;
    cout << "Last Name:" << Person1.GetLastName() << endl;
    cout << "Full Name:" << Person1.FullName() << endl;

    Person1.FirstName  = "Sami1";
    cout << "NEW FIRST NAME :"<< Person1.FirstName << endl;
    system("pause>0");
    return 0;
}