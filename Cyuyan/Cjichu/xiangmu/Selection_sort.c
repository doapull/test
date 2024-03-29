#include<stdio.h>

void swap(int *a,int *b) //交換兩個變數
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int arr[], int len) 
{
    int i,j;
 
    for (i = 0 ; i < len - 1 ; i++) 
    {
        int min = i;
        for (j = i + 1; j < len; j++)     //走訪未排序的元素
            if (arr[j] < arr[min])    //找到目前最小值
                min = j;    //紀錄最小值
           swap(&arr[min], &arr[i]);    //做交換
    }
}
int main()
{
	int arr[] = {8,45,86,10,3,6,45,90,1};
	int len = (int) sizeof(arr) / sizeof(*arr);
	selection_sort(arr,len);
	int i;
		for(i = 0;i<len;i++)
			printf("%d\n",arr[i]);
	return 0;
}
