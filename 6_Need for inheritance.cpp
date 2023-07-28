#include <iostream>
using namespace std;
/*
Inheritance
-one of the most important features of Object-Oriented Programming.
inheritance is used for communication between classes
follows and implements the concept of code reusability
child class inherits the feature of parent class
    it can change/add the inherited features of parent class
    that don't affect the existing parent class
*/
/*
    Account person, adiminstration person,technical person all have same details 
    that are repeated in all classes
    name,Joining date,salary is there
    without inheritance we need to write all these steps in all of the classes
    
    check the next file for inheritance implementation
*/
class Account
{
public:
    void accountPerson()
    {
        cout<<"This is info of account section employee"<<endl;
        cout<<"name,Joining date,salary is there"<<endl;
        cout<<"Looks after account work"<<endl;
    }
};
class Administration
{
public:
    void administrationPerson()
    {
        cout<<"This is info of administration section employee"<<endl;
        cout<<"name,Joining date,salary is there"<<endl;
        cout<<"Looks after administrative work"<<endl;
    }
};
class Technical
{
public:
    void technicalPerson()
    {
        cout<<"This is info of Technical section employee"<<endl;
        cout<<"name,Joining date,salary is there"<<endl;
        cout<<"Looks after technical work"<<endl;
    }
};
int main()
{
    Account ac1;
    ac1.accountPerson();
    cout<<endl;
    Administration ad1;
    ad1.administrationPerson();
    cout<<endl;
    Technical t1;
    t1.technicalPerson();
    return 0;
}
