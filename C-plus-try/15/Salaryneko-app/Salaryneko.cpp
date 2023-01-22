#include<iostream>
#include<string>
using namespace std;

class Neko
{
    string name;
public:
    Neko(string s);
    void naku() const;
};
Neko::Neko(string s) : name(s){}

void Neko::naku() const{
        cout<<"にゃあ" << name << "だ。"<<endl;
}

class SalaryNeko : public Neko
{
    int gekkyu;
public:
    SalaryNeko(string s, int x) : Neko(s), gekkyu(x){}
    int get_nensyu()const{return gekkyu*12;}
    void syoukyu(){gekkyu++;}
};

int main()
{
    string temp;
    cout<<"猫を生成します。名前を入力してください。"<<endl;
    cin >> temp;
    int syoninkyu;
    cout << "初任給を決めてください。"<<endl;
    cin>>syoninkyu;
    SalaryNeko dora(temp,syoninkyu); 
        while(1){
        cout << "どうしますか"<<endl;
        cout <<"1泣かす２年収表示３勝級４辞める"<<endl;
        int ans;
        cin >> ans;
        if(ans ==1){
            dora.naku();
        }
        else if(ans == 2){
            cout << "年収は現在"<<dora.get_nensyu()<<"です"<<endl;
        }
        else if(ans == 3){
            dora.syoukyu();
            cout<<"1万円昇給しました"<<endl;
        }
        else{
            break;
            cout << endl;
        }
    cout << "おしまい"<<endl;
    }

    dora.naku();   //doraに対してnakuを実行

};


