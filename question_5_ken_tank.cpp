#include<iostream>
#include<math.h>
using namespace std;

/*
    **cylinder PI.r^2.h
    **parameters(radius, height)
*/
float volume(float radius, float height)
{
    float vol;
    vol = M_PI * pow(radius, 2) * height;
    return vol;
}
/*
    **rectangle l.w.h
    **parameters(length, width, height)
*/
float volume(float length, float width, float height)
{
    float vol;
    vol = length * width * height;
    return vol;
}
/*
    **sphere 4PI.r^3/3
    **parameters(radius)
*/
float volume(float radius)
{
    float vol;
    vol = 4 * M_PI * pow(radius, 3) / 3;
    return vol;
}

int main()
{
    cout<<"Volume of cylinder "
        <<"with radius of "<<3
        <<" height of "<<1
        <<" is: "<<volume(3, 1)<<endl;
    cout<<"Volume of Rectangle "
        <<"with length of "<<5
        <<" width of "<<5
        <<" height of "<<5
        <<" is: "<<volume(5, 5, 5)<<endl;
    cout<<"Volume of Sphere "
        <<"with radius of "<<7
        <<" is: "<<volume(7)<<endl;

    return 0;
}

