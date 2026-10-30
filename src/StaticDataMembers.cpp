#include <bits/stdc++.h>
using namespace std;

class Person{
  public:
    int age ;
    static int x ;


    static int function1() {
        return 20 ;

    }
    Person(int age ){
        age= age;
        x ++ ;
        cout << x << endl ;

    }




  };

int Person::x = 0 ; // initializing the static data member(variable);

int main()
{

    Person p = Person(1) , p2 = Person(2);
    cout << p.x << endl ;
    cout << Person::function1() << endl ;
    cout << p2.function1()<< endl ;

    system("pause>0");

    return 0;
}