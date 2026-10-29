#include <iostream>
using namespace std;

class clsPerson {
private:
    // this iss private ;
    int Variable1 = 4 ;
    int function1() {
        return 40 ;


    }

protected:
    // this is only accessible inside this class and other classes that inherits clsPerson ;

    int Variable2 ;
    int function2() {
        return 100 ;
    }

public:

    string first_name;
    string last_name ;
    int Variable3;
    string Fullname() {
        return  first_name+last_name;
    }

    float function3(){
        return function1()*Variable1*Variable3 ;

    }

};


int main() {


    clsPerson person1;

    person1.first_name = "sami";
    person1.last_name = "mezghani" ;
    cout<< person1.Fullname()<< endl ;


}