#include<conio.h>
#include<stdio.h>
# define size 30
void quick_sort(int [],int,int);
int part(int [],int,int);
void main()
{
 int arr[size],n,i;
 clrscr();
 printf("Please enter the number of elements: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
   printf("Enter the element : ");
   scanf("%d",&arr[i]);
  }
 quick_sort(arr,0,n-1);
 for(i=0;i<n;i++)
 {
  printf("%d\n",arr[i]);
 }
 getch();
}
void quick_sort(int arr[size],int lb,int ub)
{
  int loc;
 if(lb<ub)
  {
  loc=part(arr,lb,ub);
   quick_sort(arr,lb,loc-1);
   quick_sort(arr,loc+1,ub);
  }
}
int part(int arr[],int lb,int ub)
{
  int pivot=arr[lb];
  int start=lb;
  int end=ub;
  int temp,mop;
  while(start<end)
   {
    while(arr[start]<pivot)
     {
      start++;
     }
    while(arr[end]>pivot)
     {
      end--;
     }
    if(start<end)
    {
     temp=arr[start];
     arr[start]=arr[end];
     arr[end]=temp;
    }
  }
   mop=arr[lb];
   arr[lb]=arr[end];
   arr[end]=mop;
   return end;
}
