//Glass.cpp
#include<iostream>
using namespace std;

class Glass
{
    int nakami;//水のりょう
    public:
        Glass(int x):nakami(x){}//引数をとるコンスト3
        Glass():nakami(10){}//引数をとらないコンストラクタ
        void dasu(int); //水を出す関数  
};

void Glass::dasu(int x){
    if(nakami>=x){
        nakami-=x;
        cout<<"水を出しました"<<endl;
        cout<<"コップの中身"<<nakami<<"です"<<endl;
    }
    else{
        cout<< "そんなに水がありません。" <<endl;
        cout<< "現在コップの中には" << nakami << "入っているだけです。" <<endl;
    }
}


int main()
{
    int x;
    cout << "コップを生成します。どれだけ水をいれるか入力してください。" << endl;
    cin >> x;
    Glass glass(x);  //引数を取るコンストラクタが呼び出され、
                     //水がxだけ入ったglassという名のコップが生成される
    cout << "さあ、glassから水を出します。いくら出しますか。入力してください。" <<endl;
    cin >> x;        //上のxを使いまわしている
    glass.dasu(x);
    cout<<"終了"<<endl;
}