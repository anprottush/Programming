#include<iostream>
using namespace std;
class Book
{
private:
    int no_of_coppies;
public:
    string book_title,writer;
    Book();
    Book(string book_title,string writer,int no_of_coppies);
    void display();
};
Book::Book()
{

}
Book::Book(string a,string b,int c)
{
    book_title=a;
    writer=b;
    no_of_coppies=c;
}
void Book::display()
{

    cout<<"No Of Copies: "<<no_of_coppies<<endl<<"Book Title: "<<book_title<<endl<<"Writer: "<<writer<<endl;
}

int main()
{
    Book b1;
    Book b2("Physics","Abir Magi",100);
    b2.display();
}
