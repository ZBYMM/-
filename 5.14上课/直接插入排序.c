#include <stdio.h>
void insertion_short(int arr[], int len)
{
    int i, j, temp;
    for (i = 1; i < len; i++)
    {
        temp = arr[i]; // 光标所处位置
        for (j = i - 1; j >= 0; j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<len;i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
   int arr[4]={5,8,7,1};
   insertion_short(arr,4);
    return 0;
}