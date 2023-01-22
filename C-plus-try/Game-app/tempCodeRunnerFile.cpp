
    else{                                 //はずれたら
        cout << "大魔王ブーの攻撃ははずれたようです。" << endl;
    }
}

int main()
{
    battele_feild dokoka;  //対決場所Dokokaの生成
                           //ここでコンストラクタが働き、ヒーローと大魔王の位置が決められる。

    dokoka.taiketu();      //dokokaの対決