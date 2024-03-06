## Experiment no - 02 Implementation of Quick Sort algorithm using Divide & Conquer method.
**Title:** Implementation of Quick Sort algorithm using Divide & Conquer method.  
**Theory/Description:**  
- The basic concept is to pick one of the elements in the array as a pivot value around which
the other elements will be rearranged. Everything less than the pivot is moved left of the pivot
(into the left partition). Similarly, everything greater than the pivot goes into the right partition. At
this point, each partition isrecursively quickly sorted.
- The Quick sort algorithm is fastest when the median of the array is chosen as the pivot value.
That is because the resulting partitions are of very similar size. Each partition splits itself in two
and thusthe base case isreached very quickly.
- In practice, the Quick sort algorithmbecomes very slow when the array passed to it is already
close to being sorted. Because there is no efficient way for the computer to find the median
element to use as the pivot, the first element of the array is used as the pivot. So when the
array is almost sorted, quick sort doesn't partition it equally. Instead, the partitions are
asymmetrical like in Figure. This meansthat one of the recursion branches is much deeper than
the other, and causes execution time to go up. Thus, it is said that the more random the
arrangement of the array, the faster the Quicksort Algorithm finishes.
- Quick sort works by partitioning a given array A[p . . r] into two non-empty sub array A[p
. . q] andA[q+1 . . r] such that every key in A[p . . q] is less than or equal to every key in
A[q+1 . . r]. Then the two sub arrays are sorted by recursive calls to Quick sort. The exact
position of the partition depends on the given array and index q is computed as a part of the
partitioning procedure.
### **Algorithm QuickSort(p,q)**
// Sorts the elements a[p],……,a[q] which reside in the global array a[1 : n] into  
ascending order.  
{  
if(p <r)then // ifthere are more thanone element  
{  
// divideP intotwo sub problems  
j=Partition (a,p,q+1);  
// j isthe position of the partitioningelement  
// solve the sub problems  
QuickSort(p, j -1);  
QuickSort(j + 1, q);  
}  
}    
![Screenshot 2024-03-06 105304](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/907dd877-fb82-4ed3-b93e-abfdf1239fe0)

- As a first step, Quick Sort chooses as pivot oneof the items in the array to be sorted. Then array
is then partitioned on either side of the pivot. Elements that are less than or equal topivot will
move toward the left and elements that are greater than or equal to pivot will move toward
theright.
### **Conclusion:**
- **Performance Analysis of Quick Sort:-**  
The running time of quick sort depends on whether partition is balanced or
unbalanced, which in turn depends on which elements of an array to be
sorted are used for partitioning.
- A very good partition splits an array up into twoequal sized arrays. A
badpartition, on other hand, splits an array up intotwoarrays of very different
sizes. The worstpartition puts only one element in one array and all other
elements in the other array. If thepartitioning is balanced, the Quick sort runs
asymptotically as fast as merge sort. On theother hand, if partitioning is
unbalanced, the Quick sort runs asymptotically as slow as insertionsort.
- **Best Case**
The best thing that could happen in Quicksort would be that each partitioning
stage dividesthe array exactly in half. In other words, the best to be a median
of thekeysin A[p . . r] every time procedure 'Partition' is called. The
procedure'Partition' always split the array to be sorted into two equal
sizedarrays.
If the algorithm'Partition' produces two regions of size n/2. The
recurrencerelation is then  
T(n) = T(n/2) + T(n/2)+ (n) = 2T(n/2) + (n)  
OR  
T(n) = (n lgn)  
