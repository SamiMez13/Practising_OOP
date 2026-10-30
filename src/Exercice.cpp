#include <bits/stdc++.h>
using namespace std;

class clsPerson{
  private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

    public:
      clsPerson(int id, string FirstName, string LastName, string Email, string Phone){
        _ID = id;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
      }

      int ID(){
       return _ID;
     }

     string FirstName(){
       return _FirstName;
     }

     string SetFirstName(string FirstName){
       _FirstName = FirstName;
     }

     string LastName(){
       return _LastName;
     }
     void SetLastName(string LastName){
       _LastName = LastName;
     }
     string Email(){
       return _Email;
     }
     void SetEmail(string Email){
       _Email = Email;
     }
     string Phone(){
       return _Phone;
     }
     void SetPhone(string Phone){
       _Phone = Phone;
     }
     void Print(){
       cout << "INFO" << endl;
       cout <<"-----------------------" << endl;
       cout << "ID: " << _ID << endl;
       cout << "FirstName: " << _FirstName << endl;
       cout << "LastName: " << _LastName << endl;
       cout << "Email: " << _Email << endl;
       cout << "Phone: " << _Phone << endl;
       cout <<"-----------------------" << endl;
     }
     void SendEmail(string Subject , string Body){
       cout << "the following message sent to email " << _Email << endl;
       cout <<"Subject" << Subject  << "\nBody" << Body << endl;
     }

  void SendSms (string Sms){
        cout << "the following Sms  sent to phone " << _Phone << endl;

cout <<"Sms" << Sms  << "\n---------------------" << endl;      }




};

int main()
{
    clsPerson Person1= clsPerson(1,"SAMI","MEZGHANI", "sami@gmail.com","445254234112");
    Person1.Print();
    Person1.SendSms("SMS");
    Person1.SendEmail("Hello","Hello");

    system("pause>0");

    return 0;
}