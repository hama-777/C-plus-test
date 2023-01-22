//ransu.cpp
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    srand((unsigned)time(NULL));

    cout << rand()%10+1 << endl;
    cout << rand()%10+1 << endl;
    cout << rand()%10+1 << endl;  

}