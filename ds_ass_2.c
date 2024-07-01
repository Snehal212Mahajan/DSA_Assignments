#include<stdio.h>
#define SIZE    10
#define Swap(a,b) { int t = a; a = b; b = t;}


void print_data(int comp, int itr);
void bubble_sort(int arr[SIZE]);
void Insertion_sort(int arr[SIZE]);
void disp_arr(int arr[SIZE]);
void Selection_sort(int arr[SIZE]);




int main()
{
    int marks[SIZE]= {32,56,78,98,90,34,56,78,21,89};
    int chiu[SIZE] = {55,99,44,66,33,77,11,22,45,78};
    printf("Before Sortttttt\n");
    disp_arr(marks);
    bubble_sort(marks);
    printf("After sort\n");
    disp_arr(marks);
    printf("---------------------------------------------------------------------------------\n");
    printf("Selection ->>>>\n");
    printf("Before Sort\n");
    disp_arr(chiu);
    Selection_sort(chiu);
    printf("After sort\n");
    disp_arr(chiu);


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
    print_data(iterations, comparisons);

}

void Insertion_sort(int arr[SIZE])
{
    int temp,i,j;
    for(i = 1; i < SIZE;i++)
    {
        temp = arr[i];
        for(j = i-1; j >= 0 && temp < arr[j]; j--)
        {
            // shift arr[j] to j+1 index
            arr[j+1] = arr[j];
        }
        // copy temp to j+1 index
        arr[j+1] = temp;
    }
}

void Selection_sort(int arr[SIZE])
{
    int sel_pos,pos;
    // Iterations
    int iterations = 0, comparisons = 0;
    for(sel_pos = 0; sel_pos < SIZE-1;sel_pos++)
    {
        // comparisons
        iterations++;
        for(pos = sel_pos+1; pos < SIZE; pos++)
        {
            comparisons++;
            if(arr[sel_pos] > arr[pos])
            {
                // swap
                Swap(arr[sel_pos],arr[pos]);
                /*
                    int t = arr[sel_pos];
                    arr[sel_pos] = arr[pos];
                    arr[pos] = t;    
                */

            }

        }


    }
                            print_data(iterations, comparisons);

   // printf("\n Iterations = %d  comparisons = %d\n",iterations,comparisons);
}

void print_data(int comp, int itr)
{
    //nt iteration, comparison;
    printf("iteration = %d, comparison = %d\n", itr, comp);
}

void disp_arr(int arr[SIZE]){

    for(int i = 0; i < SIZE; i++)
    {
        printf("%5d", arr[i]);
    }
}