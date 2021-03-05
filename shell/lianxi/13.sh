#!/bin/bash

分析出使用bash作登录Shell的本地用户
列出这些用户的shadow密码记录
按每行“用户名 --> 密码记录”保存结果

A=$(awk -F:  '/bash$/{print $1}' /etc/passwd)  ##提取符合条件的账号记录
for i in $A
do
        grep $i /etc/shadow | awk -F: '{print $1,"-->",$2}'
done

