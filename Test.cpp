#include<iostream>
using namespace std;

class Person
{
private:
    int age;
public:
    friend void setAge(Person &, int);
    friend void displayAge(Person);
};

void displayAge(Person person)
{
    cout<<"Your age is: "<<person.age<<endl;
}
void setAge(Person &person, int age)
{
    person.age = age;
}
int main()
{
    Person person;
    setAge(person, 60);
    displayAge(person);

    return 0;
}
