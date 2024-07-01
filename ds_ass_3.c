#include<stdio.h>
#define SIZE    10
#define Swap(a,b){int t=a; a =b; b=t;}
void bubble_sort(int arr[SIZE]);
void print_array(int arr[SIZE]);
int main()
{
    int rollno[SIZE]={23,43,56,67,21,78,54,32,49,69};
    int marks[SIZE]={21,76,89,98,90,78,65,56,22,78};
    printf("before sort\n");
    print_array(marks);
    bubble_sort(marks);
    printf("after sort\n");
    print_array(marks);
    return 0;
}

void bubble_sort(int arr[SIZE])
{
     int iterations = 0, comparisons = 0;
    // Iterations
    for(int it = 0; it < SIZE-1; it++)
    {
        // comparisons
        iterations++;
        for(int pos = 0; pos < SIZE-1-it; pos++)
        {
            comparisons++;
            if(arr[pos] > arr[pos+1])
            {
                // swap
                Swap(arr[pos],arr[pos+1]);
            }
        }
    }

    printf("\n Iterations = %d  comparisons = %d\n",iterations,comparisons);
}

void print_array(int arr[SIZE])
{
    for(int i =0;i<SIZE;i++)
    {
        printf("%4d",arr[i]);
    }
}

