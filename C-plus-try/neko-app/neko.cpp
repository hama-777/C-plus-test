#include<iostream>
#include<string>
using namespace std;

class Neko
{
    string name;
public:
    Neko(string);
    void naku() const;
};
Neko::Neko(string s) : name(s){}

void Neko::naku() const{
        cout<<"にゃあ" << name << "だ。"<<endl;
    };

class Inu
{
    string name;
public:
    Inu(string);   //「Inu(string s);」のsを省略した
    void naku() const;
};

Inu::Inu(string s) : name(s){}

void Inu::naku() const{
    cout<<"わん。僕は"<<name<<"だ。"<<endl;
}

int main()
{
    string s;
    cout<<"猫を生成します。名前を入力してください。"<<endl;
    cin>>s;

    Neko dora(s);  //コンストラクタが実行され、文字列sの名前のdoraが生成される
    cout<<"あなたの名づけた猫がメモリ上に生成されました。"<<endl;
    cout<<"猫が鳴きます。"<<endl;

    dora.naku();   //doraに対してnakuを実行

Inu nora("犬ボス");
cout<<"あなたの名付けた犬がメモリ上に生成されました"<<endl;
cout<<"犬が泣きます"<<endl;

    dora.naku();

};


