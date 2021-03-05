#!/bin/bash

A=$(sed -n '/bash$/s/:.*//p' /etc/passwd)             ## 提取符合条件的账号记录
for i in  $A                                         ##遍历账号记录
do
    pass1=$(grep $i /etc/shadow)
    pass2=${pass1#*:}
    pass=${pass2%%:*}
    echo "$i  -->  $pass" >> 2.txt
done
echo  "用户分析完毕请查看结果 2.txt"
exit

#从上述参考脚本可以发现，使用sed来实现字段提取会比较复杂。下一章课程将会学到awk命令，届时可以通过更简单的方法来改进此脚本内容。
#总结知识点：
#sed [选项] '条件指令' 文件
#选项:
#-n 屏蔽默认输出
#-r 支持扩展正则
#-i 修改源文件
#条件：
#行号 4 4,5 4~2 4,+10
#/正则/
#指令：
#p 打印
#d 删除
#s 替换s/旧/新/g
#a 追加
#i 插入
#c 替换行
