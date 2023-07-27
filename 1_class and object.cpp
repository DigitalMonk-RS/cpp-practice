#include <iostream>
using namespace std;
/*
    Book is the name of class in this case
    class is termed as blueprint for object
    info() is the method that's inside class
    class name begins from capital letter
*/
class Book
{
public:
    void info()
    {
        cout<<"This is inside info method of Book class"<<endl;
        cout<<"It can't be called directly from outside class like regular functions"<<endl;
    }
};
int main()
{
    Book book1;
    /*
        book1 in this case is the object of class Book
        object is defined as variable of class or instance of class
        dot operator is used for accessing the methods inside the class 
    */
    book1.info();
    return 0;
}

