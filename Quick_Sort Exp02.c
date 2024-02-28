#include <stdio.h>

void Quick_Sort(int num[20],int first ,int last)
{
    int i, j, pivot, temp;
    
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        
        while(i<j)
        {
            while(num[i] <= num[pivot] && i<last)
            i++;
            while(num[j] > num[pivot] )
            j--;
            
            if(i < j)        //if left indx < right indx swapp the elem
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
                
            }
        }
        temp=num[pivot];    //swappin thhe pivot elemnt
        num[pivot]=num[j];
        num[j]=temp;
        
        Quick_Sort(num ,first ,j - 1);
        Quick_Sort(num ,j + 1 ,last);
    }
}

int isSorted(int num[25], int size)  // if the element at index i - 1 is greater than the element at index i.
                                     // If this condition is true, it means the array is not sorted in ascending order
{
    for (int i = 1; i < size; i++) 
    {
        if (num[i - 1] > num[i]) 
        {
            return 0;  // Not sorted
        }
    }
    return 1;  // Sorted
}

int main() {
    int i, value, num[25];

    printf("Enter the no of elements: ");
    scanf("%d", &value);

    printf("Enter the %d elements: ", value);
    for (i = 0; i < value; i++) {
        scanf("%d", &num[i]);
    }

    if (isSorted(num, value))
    {
        printf("The Array is already sorted: ");
        printf("\nThe Array is: ");
    }
    else 
    {
        Quick_Sort(num, 0, value - 1);
        printf("The Sorted Array is: ");
    }

    for (i = 0; i < value; i++)
    {
        printf(" %d", num[i]);
    }

    return 0;
}
