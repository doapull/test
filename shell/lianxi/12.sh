[root@svr5 ~]# awk '{print $1,$3}' test.txt        //打印文档第1列和第3列
hello world
welcome beijing

[root@svr5 ~]# df -h | awk '{print $4}'        //打印磁盘的剩余空间

    
选项‘-F’可以指定分隔符
[root@svr5 ~]# awk -F: '{print $1,$7}' /etc/passwd
root /bin/bash
bin /sbin/nologin
daemon /sbin/nologin
adm /sbin/nologin
lp /sbin/nologin
… …
同时awk还能识别多种单个的字符，比如以‘:’或‘/’分隔
[root@svr5 ~]# awk -F [:/] '{print $1,$10}' /etc/passwd
root bash
bin nologin
daemon nologin
adm sbin
… …


awk常用内置变量：
$0 文本当前行的全部内容
$1 文本的第1列
$2 文件的第2列
$3 文件的第3列，依此类推
NR 文件当前行的行号
NF 文件当前行的列数（有几列）
输出每次处理行的行号，以及当前行以“:”分隔的字段个数（有几列）：
[root@svr5 ~]# awk -F: '{print NR,NF}' passwd.txt
1 7
2 7
3 7
.. ..


[root@svr5 ~]# awk -F: '{print $1,"的解释器:",$7}' /etc/passwd
root 的解释器: /bin/bash
bin 的解释器: /sbin/nologin
… …


awk  [选项]  '[条件]{指令}'  文件
awk  [选项]  ' BEGIN{指令} {指令} END{指令}'  文件
BEGIN{ } 行前处理，读取文件内容前执行，指令执行1次
{ } 逐行处理，读取文件过程中执行，指令执行n次
END{ } 行后处理，读取文件结束后执行，指令执行1次

##############################################################
举个例子（统计系统中使用bash作为登录Shell的用户总个数）：
a.预处理时赋值变量x=0
b.然后逐行读入/etc/passwd文件，如果发现登录Shell是/bin/bash则x加1
c.全部处理完毕后，输出x的值即可。相关操作及结果如下：
[root@svr5 ~]# awk 'BEGIN{x=0}/bash$/{x++} END{print x}' /etc/passwd
29

[root@svr5 ~]# awk -F: 'BEGIN{print "User\tUID\tHome"} \
		{print $1 "\t"  $3  "\t"  $6}     \
		END{print "Total",NR,"lines."}' /etc/passwd
User    UID     Home
root    0       /root
bin     1       /bin
daemon  2       /sbin
adm     3       /var/adm
lp      4       /var/spool/lpd
sync    5       /sbin
.. ..
Total 67 lines.


