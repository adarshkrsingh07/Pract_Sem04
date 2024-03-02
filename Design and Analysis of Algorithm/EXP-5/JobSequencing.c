#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Job Structure
typedef struct {
    char id;
    int deadline;
    int profit;
} Job;

// Function to compare two jobs 
int compareJob(const Job *a, const Job *b) {
    return b->profit - a->profit;
}

// finds the best job sequence
void bestJob(Job jobs[], int sizeOfJobs) 
{
    char jobsToDo[5] = {'\0'};
    for (int i = 0, k = 0; i < sizeOfJobs; i++) 
    {
        k = jobs[i].deadline - 1;
        // Searching backwards 
        while (jobsToDo[k] != '\0' && k >= 0) 
        {
            k--;
        }       
        if (k != -1)
            jobsToDo[k] = jobs[i].id;
    }   
    // Output the final
    printf("\nBest order and jobs to do is: ");  
    int idx = 0;
    while (jobsToDo[idx] != '\0')
    {
        printf("%c ", jobsToDo[idx]);
        idx++;
    }
}

// display the jobs table
void display(Job jobs[], int n) 
{
    printf("Job Id:      \t");
    for (int i = 0; i < n; i++) 
    {
        printf("%c \t", jobs[i].id);
    }
    printf("\n");

    printf("Job Deadline:\t");
    for (int i = 0; i < n; i++) 
    {
        printf("%d \t", jobs[i].deadline);
    }
    printf("\n");

    printf("Job Profit:  \t");
    for (int i = 0; i < n; i++) 
    {
        printf("%d \t", jobs[i].profit);
    }
    printf("\n");
}

int main() 
{  
    // Initialize the jobs
    Job jobs[] = {{'w', 1, 19}, {'v', 2, 100}, {'x', 2, 27},
                  {'y', 1, 25}, {'z', 3, 15}};                  

    // Display the jobs data
    display(jobs, 5);

    // Sorting jobs[] w.r.t their profit
    qsort(jobs, 5, sizeof(jobs[0]), compareJob);

    // Find the best job sequence
    bestJob(jobs, 5);

    return 0;
}


