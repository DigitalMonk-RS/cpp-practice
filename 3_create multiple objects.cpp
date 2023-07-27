#include <iostream>
using namespace std;
/*
    creating multiple objects of a single class
    data associated with one object is not normally available to another object
    In this program
    book1 and book2 are the objects
    when new data is provided in data2 it doesn't affect the data of book1 and vice-versa
*/
class Book
{
private:
    string book_name;
    string author_name;
    int page_count;
    float price;

public:
    void set_book_info(string p_name,string p_aname,int p_page,float p_price)
    {
        book_name = p_name;
        author_name = p_aname;
        page_count = p_page;
        price = p_price;
    }
    void display_info()
    {
        cout<<"Book: "<<book_name<<endl;
        cout<<"Author: "<<author_name<<endl;
        cout<<"Page: "<<page_count<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main()
{
    Book book1;
    cout<<"Details in book1 object"<<endl;
    book1.set_book_info("Book1","Author1",333,555);
    book1.display_info();
    cout<<"Details in book2 object"<<endl;
    Book book2;
    book2.set_book_info("Book2","Author2",300,500);
    book2.display_info();
    cout<<"Details in book1 object"<<endl;
    book1.display_info();
    return 0;
}

