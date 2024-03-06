## Experiment no - 06 Travelling Salesman Problem (TSP)
**Aim:** Implement Travelling Salesman Problem (TSP) using Dynamic Programming.  
**Objective:**    
Given a set of cities and the distance between every pair of cities, the problem is to find the
shortest possible route that visits every city exactly once and returns to the starting point.  
**Resources: Turbo c/Dev C++**
**Program Logic:**  
- Traveling salesman problem, an optimization problem in graph theory in which the nodes
(cities) of a graph are connected by directed edges (routes), where the weight of an edge
indicates the distance between two cities.
![Screenshot 2024-03-06 120633](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/3d140821-49fd-4f02-abcf-a21785bbd51a)

**Procedure:**
1. Create: Open Dev C++/C and write a program after that save the program with the .c extension.
2. Compile: Alt + F9
3. Execute: Ctrl + F10
### Conclusion:  
![Screenshot 2024-03-06 121320](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/8953dc83-4921-4232-8e68-72fc6b733f72)

**Analysis:**  
Dynamic programming creates n.2n
subproblems for n cities. Each sub-problem can be solved in
linear time. Thus the time complexity of TSP using dynamic programming would be 
O(n2
2
n
). It
is much less than n! but still, it is an exponent. Space complexity is also exponential.
