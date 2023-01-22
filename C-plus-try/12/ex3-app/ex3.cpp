//ex3.cpp
#include <iostream>
using namespace std;

int func()
{
    cout<<"I am computer"<<endl;
    return 1;
}

int main()
{
    int d;
    d=func();
    cout<<"func()から戻された値"<<d<<endl;
}