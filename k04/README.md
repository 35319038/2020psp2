# 課題4 レポート

bb35319038 廣瀬貴彌子

## 課題

[../sample/heights.csv]は標本全体（男性と女性合わせた14人）のデータをまとめたものである．
一方，[../sample/IDs.csv]は標本14人の学籍番号（身長データと同じ順番）である．
学籍番号を尋ねて，その学籍番号のデータがリストにあれば，学籍番号，身長，性別のデータを表示し，リストになければ，「No data」と表示せよ．

この二つのファイルを読み取り，学籍番号，身長，性別の3つをメンバーとする構造体の配列で管理するとよい．

## ソースコードの説明

l.21:sample heightを読み込む
l.22,32:データファイルを入力させ、fname1,2に格納
l.23,33:入力させた文字列の最後にエンターキーが入っているのでfname1,2の文字列の最後をヌル文字'\0'に置換
l.25,35:fname1,2で指定したファイルの先頭アドレスをファイルポインタfp1,2に読み込む
l.26,36:もしfp1,2がNULLだったときは、ファイルを開けなかったので、即座にプログラム終了
l.31:sample ID を読み込む
l.41:IDを読み込む
l.46:ファイルを1行ずつbufに読み込む。もし読み込み成功する限り以下を繰り返す
l.51,53,56,58:学籍番号がリストにあれば学籍番号、性別、身長を出力
l.62:リストに無ければNo dataを出力



## 入出力結果

例えば，ID 45313125のデータを調べたいとき，

```
Input the filename of sample height : ../sample/heights.csv
Input the filename of sample ID : ../sample/IDs.csv
Which ID's data do you want? : 45313125
---
ID : 45313125
gender : Female
height : 152.4
```

例えば，ID 45313124のデータを調べたいとき，

```
Input the filename of sample height : ../sample/heights.csv
Input the filename of sample ID : ../sample/IDs.csv
Which ID's data do you want? : 45313124
---
No data
```

## 修正履歴

[comment0721宮下]

課題提出お疲れさまでした！修正点はありません。k04完了です。