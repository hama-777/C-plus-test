//quiz.cpp
#include<iostream>
using namespace std;

int main()
{
    int x=0;
    while(x!=3){
        cout << "最大のやま"<<endl;
        cout << "１富山２岡山３富士山"<<endl;
        cin >> x;
        if(x == 3){
            break;
        }
        cout << "はずれです。" << endl;  //不正解の場合breakされないので
                                                     //この文が実行される。
    }
}