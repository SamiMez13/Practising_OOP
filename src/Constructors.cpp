#include <bits/stdc++.h>
using namespace std;


class clsAddress
{
  private:
    string _AdressLine1;
    string _AdressLine2;
    string _ZipCode;
    string _POBOX;

  public:
    clsAddress( const string &AdressLine1, const string &AdressLine2, const string &ZipCode, const string &POBOX){
        _AdressLine1 = AdressLine1;
        _AdressLine2 = AdressLine2;
        _ZipCode = ZipCode;
        _POBOX = POBOX;
    }
/// this is a copy constructor , we overload the constructor ;
    clsAddress( clsAddress const &oldObject) {
        _AdressLine1 = oldObject._AdressLine1;
        _AdressLine2 = oldObject._AdressLine2;
        _ZipCode = oldObject._ZipCode;
        _POBOX = oldObject._POBOX;

    }


    ~clsAddress() {
        cout << "hi i am the destructor\n";
    }
    void SetAddressLine1(const string &AdressLine1) {
        _AdressLine1 = AdressLine1;
    }

    string  AddressLine1() {
        return _AdressLine1;
    }

    void SetAdressLine2(const string &AdressLine2) {
        _AdressLine2 = AdressLine2;
    }

    string AdressLine2() {
        return _AdressLine2;
    }

    void SetZipCode(const string ZipCode) {
        _ZipCode = ZipCode;
    }

    string ZipCode() {
        return _ZipCode;
    }

    void SetPOBOX(const string POBOX) {
        _POBOX = POBOX;
    }
    string POBOX() {
        return _POBOX;
    }

    void Print() {
        cout << " AddressLine1 :" << _AdressLine1 << endl;
        cout << " AddressLine2 :" << _AdressLine2 << endl;
        cout << " ZipCode :" << _ZipCode << endl;
        cout << " POBOX :" << _POBOX << endl ;
    }


};


void function1() {
    clsAddress Address1("Route de tunis" , "km5", "3021","3022" ) ;
    Address1.Print();
    clsAddress Address2=  Address1;

}

void function2() {
    clsAddress* Adress3 = new clsAddress("é", "1","1","1");
    delete Adress3;
}

int main()
{   function1();
    function2();

    system("pause>0");

    return 0;
}