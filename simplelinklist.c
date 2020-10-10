//https://www.facebook.com/devesh.pareek.7503/posts/139817487824979
//subcribe by devesh pareek
//https://www.facebook.com/devesh.pareek.7503/posts/139817487824979
//subcribe by devesh pareek
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
void sort_array(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 
int find_value(int *arr,int n,int data)
{
    int mid;
    int l=0,r=n-1;
    while(l<=r)
    {
       // printf("%d ",l);
         mid=(l+r)/2;
        if(data==arr[mid])
            return mid+1;
        else if(data<arr[mid])
            r=mid-1;
        else if(data>arr[mid])
            l=mid+1;
    }
   // printf("%d",mid);
    if(l>r)
      return -1;
    else
      return mid+1;
    
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,m;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<arr[i-1])
        {
            printf("Numbers are not in ascending order");
            exit(0);
        }
    }
    sort_array(arr,n);
      printf("\n enter element which you want to find");
    scanf("%d",&m);
   // printf("%d",m);
        int y=find_value(arr,n,m);
       if(y==-1)
       {
           printf("item not found\n");
           exit(0);
       }
    printf("item found and item is %d at position = %d ", arr[y-1],y);
 
    return 0;
}

/*
#include<stdio.h>
int main()
{
    int i,n=5,a[n],found,flag,loc=0;
    for(i=0;i<n;i++)
    {   printf("eneter the array");
    scanf("%d",&a[i]);
    }
    printf("your array :  ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
  
    scanf("%d",&found);
    for(i=0;i<n;i++)
    {
        if(found==a[i])
        {
             flag=1;
             loc=1;
        } 
        
    
}    */
