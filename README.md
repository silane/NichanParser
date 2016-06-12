# NichanParser
2chのHTMLからスレのデータを得るC++ライブラリ
**************************************
##なにこれ
2chのHTMLからスレのデータを整形して返す簡易C++ライブラリです。スレのURLを指定するだけでHTMLをダウンロードしてそのままパースすることもできます。

##機能
スレのURLまたはスレのHTMLから以下のデータを埋めて返す

    struct Res
	  {
		    int number;
		    std::string name;
		    std::string mail;
		    std::string id;
		    std::chrono::system_clock::time_point date;
		    std::string message;
	  };

	  struct Thread
	  {
		    std::string url;
		    std::string title;
		    std::vector<Res> res;
	  };
	  
##注意
* ResとThreadの文字列のメンバーのエンコードはすべてUTF8です
* レスの内容(Resのmessageメンバ)のHTMLタグは\<br\>を含めすべて削除されます

##必要要件
* libxml2
* iconv(libxml2に必要)

##サンプル
test.cpp参照

##ライセンス
LICENSE.txt参照
