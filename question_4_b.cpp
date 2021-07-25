#include <iostream>
using namespace std;

class Total
{
private:
    int value;
public:
    Total(int);
    int getValue();
};

Total::Total(int value)
{
    this->value = value;
}
int Total::getValue()
{
    return value;
}
void computeTotal(Total a, Total b)
{
    int total = a.getValue() + b.getValue();
    cout<<"Total computed is: "<<total<<endl;
}
int main()
{
    Total test1(50), test2(70);
    computeTotal(test1, test2);

    return 0;
}
