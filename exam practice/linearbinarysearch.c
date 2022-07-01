#include <stdio.h>
int linearsearch(int arr[],int n,int element){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==element)
        {
                return i;
        }
        
    }
    return -1;
    
}
int binarysearch(int arr[],int n,int element){
    int mid,high=n-1,low=0;
    while (low<=high)
    {
       
    mid=(low+high)/2;
    if (arr[mid]==element)
    {
        return mid;
    }
    if (arr[mid]<element)
    {
        low=mid+1;
    }
    else{
        high=mid-1;
    }
    }
    return -1;
    
    
}
int main (int argc, char *argv[]) {
    int arr[]={1,3,5,56,64,73,123,225,444};
    int n=sizeof(arr)/sizeof(int);
    int element=444;
    int searchindex=binarysearch(arr, n, element);
    printf("The element %d was found at the %d \n",element,searchindex);
    return 0;
}