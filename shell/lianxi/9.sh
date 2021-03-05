#!/bin/bash

read -p "请输入一个正整数：" x
x=${x:-1}
i=1; SUM=0
while [ $i -le $x ]
do
    let SUM+=i
    let i++
done
echo "从1到$x的总和是：$SUM"
