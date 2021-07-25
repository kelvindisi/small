#include<iostream>
using namespace std;
//class prototype
class Second;
// first class definition
class First
{
 private:
     int a;
 public:
     friend void insert(First &, int);
     friend void swap(First &, Second &);
     friend void view(First);
};
//second class definition
class Second
{
private:
    int b;
 public:
     friend void insert(Second &, int);
     friend void swap(First &, Second &);
     friend void view(Second);
};

void insert(First &f, int value)
{
    f.a = value;
}
void insert(Second &s, int value)
{
    s.b = value;
}
void swap(First &f, Second &s)
{
    int temp = f.a;
    f.a = s.b;
    s.b = temp;
}
void view(First f)
{
    cout<<"Value at 'First' is: "<<f.a<<endl;
}
void view(Second s)
{
    cout<<"Value at 'Second' is: "<<s.b<<endl;
}

int main()
{
    First y;
    Second z;
    insert(y, 10);
    insert(z, 50);
    cout<<"Before swap: "<<endl;
    view(y);
    view(z);
    swap(y, z);
    cout<<"After swap: "<<endl;
    view(y);
    view(z);

    return 0;
}

