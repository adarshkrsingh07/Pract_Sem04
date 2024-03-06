## Experiemnt no - 05 Job Sequencing with a deadline using the Greedy Approach
**Aim:** Perform Job Sequencing with a deadline using the Greedy Approach using C/C++.  
**Objective:**  
In the job sequencing problem, the objective is to find a sequence of jobs, which is completed
within their deadlines and gives maximum profit.
**Resources: Turbo c/Dev C++**  
**Program Logic:**  
A greedy algorithm is an approach for solving a problem by selecting the best option
available at the moment. It doesn't worry whether the current best result will bring the overall
optimal result.
- The algorithm never reverses the earlier decision even if the choice is wrong. It works in a
top-down approach.
1. Begin
 2. Sort all the jobs based on profit Pi so
 3. P1 > P2 > P3 …………………………….>=Pn
 4. d = maximum deadline of job in A
 5. Create array S[1,…………………,d]
 6. For i=1 to n do
 7. Find the largest job x
 8. For j=i to 1
 9. If ((S[j] = 0) and (x deadline<= d))
 10. Then
 11. S[x] = i;
 12. Break;
 13. End if
 14. End for
 15. End for
 16. End
**Procedure:**  
1. Create: Open Dev C++/C and write a program after that save the program with the .c extension.
2. Compile: Alt + F9
3. Execute: Ctrl + F10
   ### Conclusion:-
   ![Screenshot 2024-03-06 120516](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/14a2edb7-1607-41ec-a0d7-76a032921837)
