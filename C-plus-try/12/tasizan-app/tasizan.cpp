//tasizan.cpp
#include<iostream>
using namespace std;

int add()
{
    int a,b;
    cout << "これから二つの整数の足し算をします。" << endl;
    cout << "まず、ひとつめの整数を入力してください。" << endl;
    cin >> a;
    cout << "もうひとつの整数を入力してください。" << endl;
    cin >> b;
    return a + b;
}

int main()
{
    int d = add();
    cout << "合計：" << d << endl;
}
