#!/bin/bash

##[root@svr5 ~]# XX=11
#[root@svr5 ~]# echo $XX              //查看原变量值
#11
#[root@svr5 ~]# echo ${XX:-123}      //因XX已存在，输出变量XX的值
#11

read  -p   "请输入用户名:"   user
[ -z $user ] && exit  #如果无用户名，则脚本退出
read  -p   "请输入密码:"   pass
pass=${pass:-123456}  #如果用户没有输入密码，则默认密码为123456
useradd  $user
echo "$pass"  | passwd $user

