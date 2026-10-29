#include <iostream>
using namespace std;

class clsPerson {
private:
    // this iss private ;
    int Variable1 = 4 ;
    int function1() {
        return 40 ;


    }


public:

    string first_name;
    string last_name ;

    string Fullname() {
        return  first_name+last_name;
    }




};


int main() {


    clsPerson person1;
    string S1;
    
    person1.first_name = "sami";
    person1.last_name = "mezghani" ;
    cout<< person1.Fullname()<< endl ;


}