#!/bin/bash

[root@svr5 ~]# echo $phone
13788768897
[root@svr5 ~]# echo  ${phone/8/X}
137X8768897
[root@svr5 ~]# echo  ${phone//8/X}
137XX76XX97



[root@svr5 ~]# echo $A
root:x:0:0:root:/root:/bin/bash
[root@svr5 ~]# echo ${A#*:}
x:0:0:root:/root:/bin/bash
[root@svr5 ~]# echo ${A##*:}
/bin/bash
[root@svr5 ~]# echo ${A%:*}
root:x:0:0:root:/root
[root@svr5 ~]# echo ${A%%:*}
root


