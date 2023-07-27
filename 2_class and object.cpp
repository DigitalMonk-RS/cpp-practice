#include <iostream>
using namespace std;
/*
    class name is Book, implying we are planning to handle the information related to Books
    Books will have features like:
    book_name, author_name, page_count, price etcetera
    feel free to add other attributes as well
    these attributes will be under private access specifier

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
    book1.set_book_info("Book1","Author1",333,555);
    book1.display_info();
    return 0;
}
