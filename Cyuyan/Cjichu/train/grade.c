#include <stdio.h>  //导如输入输出头文件

int main(){
    //主函数 
    int cj[100]={0};//定义数组 
    int n;
    int count=0;//定义计数器，统计有多少人达到平均分 
    scanf("%d",&n);
    int i=0;
    //读入数据 
    for(i=0;i<n;i++){
        scanf("%d",&cj[i]);
    } 
    //对数据进行求和 
    double sum=0;
    for(i=0;i<n;i++){
        sum+=cj[i];
    } 
    //求平均分 
    double arg=sum/n;
    //判断有多少人达到平均分； 
    for(i=0;i<n;i++){
        if(cj[i]>arg){
            count++;
        }
    } 
    //输出平均分和人数 
    printf("平均分为：%0.2f\n超过平均分的人有：%d个\n",arg,count);
  return 0;
}
