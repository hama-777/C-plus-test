//Game.cpp
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Hero
{
    int power;
public:
    Hero():power(100){}
    int getPower(){ return power; }  //「powerを戻す」関数
    void attack(int n);
    void defence(int n);
};
void Hero::attack(int n)
{
    cout << "悪党め。正義の攻撃を受けてみよ" << endl;
    cout << "どカーン！！！" << endl;
    power-=n;   
    if(power>=0){
        cout << "現在のパワーは" << power << "だ" << endl;
    }
    else{
        cout << "しまったパワーを使いすぎた" << endl;
        cout << "もうおしまいだ。がく" << endl;
        cout << "ヒーローは倒れました" << endl;
    }
}
void Hero::defence(int n)
{
    cout << "くそ。悪党の攻撃も当たることがあるのか？" << endl;
    power-=n;
    if(power>=0){
        cout << "現在のパワーは" << power << "だ" << endl;
    }
    else{
        cout << "しまったパワーを使いすぎた" << endl;
        cout << "もうおしまいだ。がく" << endl;
        cout << "ヒーローは倒れました" << endl;
    }
}


class Demon
{
    int power;
public:
    Demon():power(100){}
    int getPower(){ return power; }  //「powerを戻す」関数
    void attack(int n);
    void defence(int n);
};
void Demon::attack(int n)
{
    cout << "悪党め。正義の攻撃を受けてみよ" << endl;
    cout << "どカーン！！！" << endl;
    power-=n;   
    if(power>=0){
        cout << "現在のパワーは" << power << "だ" << endl;
    }
    else{
        cout << "しまったパワーを使いすぎた" << endl;
        cout << "もうおしまいだ。がく" << endl;
        cout << "ヒーローは倒れました" << endl;
    }
}
void Demon::defence(int n)
{
    cout << "くそ。悪党の攻撃も当たることがあるのか？" << endl;
    power-=n;
    if(power>=0){
        cout << "現在のパワーは" << power << "だ" << endl;
    }
    else{
        cout << "しまったパワーを使いすぎた" << endl;
        cout << "もうおしまいだ。がく" << endl;
        cout << "ヒーローは倒れました" << endl;
    }
}


class Battle_feild
{
    Demon covid;
    Hero you;
    int covid_in_feild;
    int you_in_feild;
public:
    Battle_feild();
    void Battle();
    void kurikaesi_taiketu();   //「繰り返し対決する」関数
};
Battle_feild::Battle_feild()
{
    srand((unsigned)time(NULL));
    covid_in_feild=rand()%5+1;
    cout << "あなたとデーモンCovidとの決戦です。\n" << endl;
    cout << "デーモンCovidは座標1～5のどこかに潜んでいます。" << endl;
    cout << "あなたもどこかに身を潜めてください。" << endl;
    cout << "身を潜める座標（1～5の数値）を入力してください。" << endl;
    cin >> you_in_feild;             //ヒーローの場所を入力
}

void Battle_feild::Battle()
{
    int position,offence;
    cout << "さあ、あなたの攻撃です。" << endl;
    cout << "攻撃の位置（1～5の数値）を入力してください。>> ";
    cin >> position;                //攻撃する位置をitiに代入
    cout << "攻撃に使うパワー（100以下の数値）を入力してください。>> ";
    cin >> offence;            //攻撃に使うパワーをkougekiに代入
    cout << endl;
    you.attack(offence); //ヒーローyouの攻撃   

    if(covid_in_feild == position){    //もしbu_no_bashoとitiが一致したら（つまり、ねらったところに大魔王がいたら）
        covid.defence(offence * 2);  //攻撃を受けます。このとき大魔王は
                                         //ヒーローが使ったパワーの2倍を消耗します。
                                         //kougeki * 2とはkougekiの2倍という意味です。
    }
    else{
        cout << "あなたの攻撃ははずれたようです。" << endl;  //はずれたら、何も起こらない
    }
    cout << endl;
    cout << "大魔王の攻撃です。" << endl;
    cout << "（エンターキーを押してください。）" << endl;
    cin.sync();       //cinをフラッシュ（次回に説明します）
    cin.get();        //1時ストップ（次回に説明します）
    position = rand() % 5 + 1;       //大魔王の攻撃の位置は乱数（ここでは1～5までのうちのどれか）で決まる
    offence = rand() % 100 + 1; //大魔王の攻撃の量も乱数（1～100までのうちのどれか）で決まる
    covid.attack(offence);   //大魔王buの攻撃（大魔王のパワーが減る）
    if(you_in_feild == position){              //当たったら
        you.defence(offence * 2);  //攻撃される
    }
    else{                                 //はずれたら
        cout << "大魔王ブーの攻撃ははずれたようです。" << endl;
    }
}

void Battle_feild::kurikaesi_taiketu()
{
    while(1){
        if(you.getPower() < 0){
            cout << "\n大魔王の前に正義のヒーローは敗れました。"<<endl;
            break;
        }
        if(covid.getPower() < 0){
            cout << "\n正義のヒーローの前に大魔王は敗れました。" << endl;
            break;
        }
    }
}

int main()
{
Battle_feild dokoka;  //対決場所Dokokaの生成
                           //ここでコンストラクタが働き、ヒーローと大魔王の位置が決められる
dokoka.Battle();      //dokokaの対決
}

