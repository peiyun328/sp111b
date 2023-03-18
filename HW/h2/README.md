# Compiler
- 修改自老師的程式專案，主要添加了`DO_WHILE()`函式於120-134行

## 語法

```
PROG = STMTS
BLOCK = { STMTS }
STMTS = STMT*
STMT = WHILE | BLOCK | ASSIGN
DO_WHILE = do STMT while (E);
WHILE = while (E) STMT
ASSIGN = id '=' E;
E = F (op E)*
F = (E) | Number | Id
```

## 執行結果

```
(base) Yuns-MacBook-Pro:h2 yun$ ./compiler test/do.c
i = 1;
do{
    i = i + 1;
}
while(i<=10);

========== lex ==============
token=i
token==
token=1
token=;
token=do
token={
token=i
token==
token=i
token=+
token=1
token=;
token=}
token=while
token=(
token=i
token=<=
token=10
token=)
token=;
========== dump ==============
0:i
1:=
2:1
3:;
4:do
5:{
6:i
7:=
8:i
9:+
10:1
11:;
12:}
13:while
14:(
15:i
16:<=
17:10
18:)
19:;
============ parse =============
t0 = 1
i = t0
(L0)
t1 = i
t2 = 1
t3 = t1 + t2
i = t3
t4 = i
t5 = 10
t6 = t4 <= t5
if not T6 goto L1
goto L0
(L1)
``` 