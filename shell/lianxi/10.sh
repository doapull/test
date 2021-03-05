#!/bin/bash

[root@svr5 ~]# sed  -n 'p' a.txt            //输出所有行，等同于cat a.txt
[root@svr5 ~]# sed  -n '4p' a.txt            //输出第4行
[root@svr5 ~]# sed  -n '4,7p' a.txt        //输出第4~7行
[root@svr5 ~]# sed  -n '4,+10p' a.txt        //输出第4行及其后的10行内容
[root@svr5 ~]# sed  -n '/^bin/p' a.txt        //输出以bin开头的行
[root@svr5 ~]# sed  -n '$=' a.txt            //输出文件的行数

[root@svr5 ~]# sed  '3,5d' a.txt             //删除第3~5行
[root@svr5 ~]# sed  '/xml/d' a.txt            //删除所有包含xml的行
[root@svr5 ~]# sed  '/xml/!d' a.txt         //删除不包含xml的行，!符号表示取反
[root@svr5 ~]# sed  '/^install/d' a.txt    //删除以install开头的行
[root@svr5 ~]# sed  '$d' a.txt                //删除文件的最后一行
[root@svr5 ~]# sed  '/^$/d' a.txt             //删除所有空行

[root@svr5 ~]# sed 's/xml/XML/'  a.txt        //将每行中第一个xml替换为XML
[root@svr5 ~]# sed 's/xml/XML/3' a.txt     //将每行中的第3个xml替换为XML
[root@svr5 ~]# sed 's/xml/XML/g' a.txt     //将所有的xml都替换为XML
[root@svr5 ~]# sed 's/xml//g'     a.txt     //将所有的xml都删除（替换为空串）
[root@svr5 ~]# sed 's#/bin/bash#/sbin/sh#' a.txt  //将/bin/bash替换为/sbin/sh
#上面的式子其实就是 sed 's/ /bin/bash / /sbin/sh /' a.txt
#但是多个‘/’连用会使替换格式中的‘/’无法识别，要换成‘#’或‘&’等
[root@svr5 ~]# sed '4,7s/^/#/'   a.txt         //将第4~7行注释掉（行首加#号）
[root@svr5 ~]# sed 's/^#an/an/'  a.txt         //解除以#an开头的行的注释（去除行首的#号）

将文件中每行的第一个、倒数第1个字符互换
每行文本拆分为“第1个字符”、“中间的所有字符”、“倒数第1个字符”三个部分，然后通过替换操作重排顺序为“3-2-1”：
[root@svr5 ~]# sed -r 's/^(.)(.*)(.)$/\3\2\1/' nssw.txt

删除所有数字、行首空格的操作如下：
[root@svr5 ~]# sed -r 's/[0-9]//g;s/^( )+//' nssw2.txt

为文件中每个大写字母添加括号
使用“（）”可实现保留功能，所以可参考下列操作解决：
[root@svr5 ~]# sed -r 's/([A-Z])/[\1]/g' nssw.txt

cp /etc/vsftpd/vsftpd.conf{,.bak}          //备份默认的配置文件


####################################################################
i：在指定的行之前插入文本
a：在指定的行之后追加文本
c：替换指定的行


[root@svr5 ~]# sed  '2a XX'   a.txt            //在第二行后面，追加XX
[root@svr5 ~]# sed  '2i XX'   a.txt            //在第二行前面，插入XX
[root@svr5 ~]# sed  '2c XX'   a.txt            //将第二行替换为XX


