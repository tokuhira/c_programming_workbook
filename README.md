# Private notes on "C Programming Workbook, Learning in SHAKYO Style"
# 「写経型学習によるC言語プログラミングワークブック」私家版攻略メモ

本文書は、標記の本を読みすすめるにあたって、学習者による読み替えが必要そうな項目のメモである。

## 前提情報

出版社から[正誤表](https://www.kyoritsu-pub.co.jp/app/file/goods_contents/276.pdf)が出ているので、自分が持っている本が誤っている箇所は予め修正してから学習する。

## 第I部 C言語習得編

### 1. 学習の仕方を理解する

#### p.7 エディタ

Windows以外のOSにたいがいインストールされているviを使う。
ファイルの編集はターミナル上で行う。
実際には上位互換であるvimがインストールされていることが多いが、気にしない。

#### p.7 コンパイラ

gccを使うのは本に記載の内容と同じだが、Windows以外の環境ではMinGWは使わない。
macOSではHomebrewでgccをインストールする。

### 2. プログラミングに使用する文字と用語

#### p.11 コラム - 1

macOSのターミナルでは「\」をそのまま用いる。
JISコードの円記号「¥」を読み替える必要は無いが、他の環境では気にする必要があることを覚えておく。

### 3. C言語の実行環境の準備とC言語プログラムの開発手順

#### pp.17-20 MinGWのダウンロード方法

環境の構築は初学者がつまづき易いポイントのひとつなので、よく分かっている人に手伝って貰うのが良い。
gccはたいがいのOSで使える。

#### pp.21-22 C言語プログラムの開発手順

プログラムを保存するディレクトリは「~/src」とする。

macOSの日本語環境はデフォルトが「LANG=ja_JP.UTF-8」のようなので、gccを普通に使えば良い。
つまり「gccj.bat」は作らない。

gccが素直にインストールされていれば、普通にターミナルで呼び出せるようにするものなので、パスの設定は不要。

macOSでは、プログラムを保存するディレクトリへ移動する時に「C:¥」のようなドライブは意識しなくてよい。
次のように、単にcdコマンドの引数に移動したいディレクトリを指定すればよい。
```bash
cd ~/src
```

#### pp.23-35 補足：コマンドプロンプトの使い方

macOSではターミナル（Terminal.app）を使えばよい。
履歴の利用は同様に行える。コピーと貼り付けはMacの作法に則って行える。

#### p.28 実際にプログラムを書いて実行しよう

一番つまずき易いコンパイルについて、その説明を見るのにp.21に戻らせているが、そこに書かれている「gccj.bat」は使わないので無視する。
コンパイルにはgccコマンドを用いる。
コンパイル結果の実行ファイルは「a.out」という名前になる。
実行するまでの流れの例は次の通り。
```bash
hostname:~ username$ cd src
hostname:src username$ vi sample1-1.c 
hostname:src username$ cat sample1-1.c 
#include <stdio.h>

int main(void)
{
    printf("C言語のプログラムを作ってみよう！\n");

    return 0;
}
hostname:src username$ gcc sample1-1.c 
hostname:src username$ ls
a.out		sample1-1.c
hostname:src username$ ./a.out
C言語のプログラムを作ってみよう！
hostname:src username$ 
```

#### pp.30-31 よくあるコンパイルエラー

gccが出力するエラーメッセージは英語だけどとても平易なので、ゆっくり読めば必ず理解できる。

## 第II部 プログラミングによる問題解決編

また後で。

## 附録

#### p.303 乱数を扱うライブラリ

乱数の最大値RAND_MAXはstdlib.hにて定義されており、環境によって異なる。例えば64bitのmacOSでは/usr/include/stdlib.hで0x7FFFFFFFと定義されており、10進数で2147483647である。

## License

[![Creative Commons License](https://i.creativecommons.org/l/by/4.0/80x15.png)](http://creativecommons.org/licenses/by/4.0/)
This work is licensed under a [Creative Commons Attribution 4.0 International License](http://creativecommons.org/licenses/by/4.0/).

---
&#169; 2019 Masatsune Tokuhira
