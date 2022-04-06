#include <iostream>

using namespace std;

class book
{
    public:

    int page_no;
    string book_name;
    string writer_name;

    void display()
    {
            cout<<page_no<<endl;
            cout<<book_name<<endl;
            cout<<writer_name<<endl;
    }

    int fun_book(int page,string b_name,string w_name)
    {
       page_no= page;
       book_name= b_name;
       writer_name= w_name;
            cout<<page_no<<endl;
            cout<<book_name<<endl;
            cout<<writer_name<<endl;

    }

};

int main()
{
    book B1;
    B1.page_no=01;
    B1.book_name="Tumi Ach Bolay";
    B1.writer_name="Monir farukh";

    cout<<B1.page_no<<endl;
    cout<<B1.book_name<<endl;
    cout<<B1.writer_name<<endl;

    book B2;
    B2.page_no=100;
    B2.book_name="Kisnochora Tumi";
    B2.writer_name="Kaji Nojrul Islam";
    B2.display();

    book B4;
    B4.fun_book(300,"K Tmi Rupmoti","Manik Islam");

return 0;
}