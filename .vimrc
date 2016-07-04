"#####表示設定#####
set number "行番号を表示する
set cursorline "カーソル行の背景色変更
"set cursorcolumn
set title "編集中のファイル名を表示
set showmatch "括弧入力時の対応する括弧を表示
syntax on "コードの色分け
"set tabstop=4 "インデントをスペース4つ分に設定
set smartindent "オートインデント

"#####検索設定#####
set ignorecase "大文字/小文字の区別なく検索する
set smartcase "検索文字列に大文字が含まれている場合は区別して検索する
set wrapscan "検索時に最後まで行ったら最初に戻る
" ビジュアルモードで選択したテキストが、クリップボードに入るようにする
" http://nanasi.jp/articles/howto/editing/clipboard.html
" set clipboard=autoselect
 
 " 無名レジスタに入るデータを、*レジスタにも入れる。
 " set clipboard+=unnamed
set clipboard=unnamedplus
"set list "空白文字の可視化
"set listchars=tab:»-,trail:-,eol:↲,extends:»,precedes:«,nbsp:%
set whichwrap=b,s,[,],<,> "カーソルの回り込みができるようになる
set backspace=indent,eol,start "バックスペースを、空白、行末、行頭でも使えるようにする
set mouse=a "マウスを有効にする
set incsearch "インクリメンタルサーチ有効化
