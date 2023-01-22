//Omikuji.cpp
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Omikuji
{
    int un;
public:
    Omikuji();
    void hiku();
};

Omikuji::Omikuji()
{
    srand((unsigned)time(NULL));
    cout<<"自分のラッキーナンバー（１から）５を代入してください"<<endl;
    cin>>un;
}

void Omikuji::hiku()
{
    int x;
    x = rand()%5+1;
    cout << "あなたの運勢は";
    if(x ==un){
        cout << "大吉ということです"<<endl;
    }
    else{
        cout<<"並ということです"<<endl;
    }
}
int main()
{
    Omikuji today;
    today.hiku();
}