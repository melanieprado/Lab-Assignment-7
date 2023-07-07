#include <stdio.h>

void swap(int *xp, int *yp);
void bubbleSort(int arr[], int n);
void swapCount(int flag);

int main()
{
    int arr[] = {97,16,45,63,13,22,7,58,72};

    int n = 9; //size of the array

    bubbleSort(arr, n);

    return 0;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j,temp;
   for (i = 0; i < n-1; i++)
   {
     int flag = 0;
        for (j = 0; j < n-i-1; j++)
        {
           if (arr[j] > arr[j+1])
           {
             //then swap
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
             flag+=1;
           }
        }
     swapCount(flag);
    }
}

void swapCount(int flag)
{
  printf("%d ",flag);
}