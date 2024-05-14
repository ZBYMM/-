#include<stdio.h>
void binary_insertion_short(int arr[],int len)
{
    int temp,i,j,left,right,middle,index;
    //先构造能够进行折半的已排序序列
    if(arr[0]>arr[1])
    {
        temp=arr[0];
        arr[0]=arr[1];
        arr [1]=temp ;
    }
    

}