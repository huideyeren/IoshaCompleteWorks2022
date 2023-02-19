= これはマークダウンで書かれています

Markdownはあまりおすすめできませんが、混在可能です。

== 変換の詳細

@<href>{https://github.com/kmuto/pandoc2review,pandoc2review}を使っています。

なお、WordからRe:VIEWへの変換は@<href>{https://github.com/huidetang/yokogaki-template,横書きテンプレート}と@<href>{https://github.com/huidetang/yokogaki-template,縦書きテンプレート}両方で開発中になっております。同様に、ODFからの変換も開発中です。

どうも、@<href>{https://pandoc.org/lua-filters.html,PandocのLuaフィルター}を何とかするしかないようです。

== 画像に関して

画像を貼る場合は、以下のようにしてください。

//image[louisa-vrc][著者近影]{
著者、ヨーシャのもう一つの姿である「るいざ・しゃーろっと」の姿
//}

書き方は以下の通りです。

//emlist[][markdown]{
![著者近影](louisa-vrc.png)
//}

ポイントは以下の通りです。

 * 代替テキストをしっかり入れる
 * 画像は @<tt>{images} ディレクトリに直に配置し、その中でファイル名のみをリンクに書く

== 脚注

使わない方が無難@<fn>{fn1}です。

== 原稿の送り方

以下の3つの手段があります。

 1. GitHubのコミット権限を得て直接編集、pushする
 2. ヨーシャにRe:VIEW形式かmarkdown形式で原稿を送る
 3. ヨーシャにその他の形式で原稿を送る

== 定義リスト

 : 用語1
	定義1


というように、使えます。

== リンク

@<href>{https://lit.link/VRCLouisa}

@<tt>{<} と @<tt>{>} で囲む方が無難かと思います。

//footnote[fn1][うまく動きません。とりわけ長い脚注は動きません。]
