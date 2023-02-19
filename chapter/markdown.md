# これはマークダウンで書かれています

Markdownはあまりおすすめできませんが、混在可能です。

## 変換の詳細

[pandoc2review](https://github.com/kmuto/pandoc2review)を使っています。

なお、WordからRe:VIEWへの変換は[横書きテンプレート](https://github.com/huidetang/yokogaki-template)と[縦書きテンプレート](https://github.com/huidetang/yokogaki-template)両方で開発中になっております。同様に、ODFからの変換も開発中です。

どうも、[PandocのLuaフィルター](https://pandoc.org/lua-filters.html)を何とかするしかないようです。

## 画像に関して

画像を貼る場合は、以下のようにしてください。

![著者近影](louisa-vrc.png "著者、ヨーシャのもう一つの姿である「るいざ・しゃーろっと」の姿")

書き方は以下の通りです。

``` markdown
![著者近影](louisa-vrc.png)
```

ポイントは以下の通りです。

- 代替テキストをしっかり入れる
- 画像は `images` ディレクトリに直に配置し、その中でファイル名のみをリンクに書く

## 脚注

使わない方が無難[^1]です。

[^1]: うまく動きません。とりわけ長い脚注は動きません。

## 原稿の送り方

以下の3つの手段があります。

1. GitHubのコミット権限を得て直接編集、pushする
2. ヨーシャにRe:VIEW形式かmarkdown形式で原稿を送る
3. ヨーシャにその他の形式で原稿を送る

## 定義リスト

用語1

:   定義1

というように、使えます。

## リンク

<https://lit.link/VRCLouisa>

`<` と `>` で囲む方が無難かと思います。