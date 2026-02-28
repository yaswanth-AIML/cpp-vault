#include<stdio.h>
int main()
{
    int arr[10],i,pos,size,num;
    printf("enter the size of the array");
    scanf("%d",&size);
    printf("enter the elements to enter in the array");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to insert");
    scanf("%d",num);
    printf("enter the positionn to insert");
    scanf("%d",pos);
   for(i=size-1;i>=pos;i--)
   {
     arr[i+1]=arr[i];
   }
   arr[pos-1]=num;
   size++;
   for(i=0;i<size;i++)
   {
    printf("%d \n",arr[i]);
   }
}