#!/bin/bash
your_name="runningman"
greeting="hello,"$your_name"!"
greeting_1="hello,${your_name}!"
echo $greeting
echo $greeting_1
greeting_2='hello,'$your_name'!'
greeting_3='hello,$[your_name]!'
echo $greeting_2
echo $greeting_3
