#include <iostream>
using namespace std;

class Book
{
private:
    string author, title, publisher, acc_no;
    int no_of_copies;
    float price;
public:
    void printDetails();
    void setAuthor(string);
    void setTitle(string);
    void setPublisher(string);
    void setAccNo(string);
    void setCopies(int);
    void setPrice(float);
};

void Book::printDetails()
{
    cout<<"Title: "<<title<<endl
        <<"Author: "<<author<<endl
        <<"Publisher: "<<publisher<<endl
        <<"Account No: "<<acc_no<<endl
        <<"No of copies: "<<no_of_copies<<endl
        <<"Price: "<<price<<endl;
}
void Book::setAuthor(string author)
{
    this->author = author;
}
void Book::setTitle(string title)
{
    this->title = title;
}
void Book::setPublisher(string publisher)
{
    this->publisher = publisher;
}
void Book::setAccNo(string acc_no)
{
    this->acc_no = acc_no;
}
void Book::setCopies(int copies)
{
    no_of_copies = copies;
}
void Book::setPrice(float price)
{
    this->price = price;
}

// main method
int main()
{
    const int total_books = 10;
    string author, title, publisher, acc_no;
    int no_of_copies;
    float price;
    Book books[total_books];

    for (int i=0; i<total_books; i++)
    {
        cout<<"************************"<<(i+1)<<"************************"<<endl;
        cout<<"Enter book title: ";
        getline(cin, title);
        books[i].setTitle(title);
        cout<<"Enter Author name: ";
        getline(cin, author);
        books[i].setAuthor(author);
        cout<<"Enter publisher name: ";
        getline(cin, publisher);
        books[i].setPublisher(publisher);
        cout<<"Enter account number: ";
        cin>>acc_no;
        books[i].setAccNo(acc_no);
        cout<<"Enter no of copies: ";
        cin>>no_of_copies;
        books[i].setCopies(no_of_copies);
        cout<<"Enter price: ";
        cin>>price;
        books[i].setPrice(price);
    }
    cout<<"\n\n***************LIST OF AVAILABLE BOOKS***************\n";
    for (int i=0; i<total_books; i++)
    {
        cout<<"************************"<<(i+1)<<"************************"<<endl;
        books[i].printDetails();
    }
}
