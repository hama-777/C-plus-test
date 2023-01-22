//neko.cpp
#include<iostream>
using namespace std;

class Neko
{
    string name;
    int power;
public:
    Neko(string n):name(n),power(10){}
    int morau();
    int naku();
};
int Neko::morau()
{
    int x;
    cin >> x;
    power = power + x;
    cout << x << "食べました"<<endl;
    return power;
}
int Neko::naku()
{
    cout << "にゃあ。俺様は" << name << "だ。" << endl; 
    power = power -5;
    return power;
}
int main()
{
    string temp;
    cin >> temp;
    Neko kai_neko(temp);
    int t;
    t = kai_neko.morau();
    cout << t << endl;
    t = kai_neko.naku();
    cout << t << endl;
    cout << temp << endl;
}