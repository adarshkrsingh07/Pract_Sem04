## Experiment no - 04 Minimum Cost Spanning Tree using Kruskal’s Algorithm
**Aim:**   
Find out the Minimum Cost Spanning Tree using Kruskal’s Algorithm with the help of the
Greedy Approach.  
**Objective:**  
Kruskal's algorithm: Kruskal’s algorithm finds the minimum spanning tree for a weighted
connected graph G=(V,E) to get an acyclic sub graph with |V|-1 edges for which the sum of
edge weights is the smallest.  
**Resources: Turbo c/Dev C++**  
### **Program Logic:**  
A minimum spanning tree (MST) or minimum weight spanning tree is a subset of the edges
of a connected, edge-weighted undirected graph that connects all the vertices together,
without any cycles and with the minimum possible total edge weight.  
1 Algorithm Kruskal(E , cost, n ,t)  
2 // E is the set of edges in G.G has n vertices. cost [u, v] is the  
3 // cost of edge (u,v). t is the set of edges in the minimum-cost  
4 // spanning tree. The final cost is returned.  
5 {  
6 Construct a heap out of the edge costs using Heapify;  
7 for i :=1 to n do parent[i]:=-1;  
8 // Each vertex is in a different set.  
9 i :=0; mincost:=0.0;  
10 while ((i< n-1) and (heap not empty)) do  
11 {  
12 Delete a minimum cost edge(u,v) from the heap  
13 and reheapify using Adjust;  
14 j :=Find(u); k :=Find(w);  
15 if (j != k) then  
16 {  
17 i: =i+ l;  
18 t [i, 1]:=u; t [i, 2]:=v;  
19 mincost:=mincost+ cost[u, v];   
20 Union(j,k);   
21 }  
22 }  
23 if (i!=n -1) then write ("No spanning tree”);  
24 else return mincost;  
25}  
### **Conclusion:**
![Screenshot 2024-03-06 110537](https://github.com/adarshkrsingh07/Pract_Sem04/assets/123314058/707bcbc2-dc79-4986-b719-329db2a88a36)
### **Analysis:**  
The time complexity of Kruskal’s Algorithm = O(ElogV) or O(ElogE). where e is the number of
edges and v is the number of vertices.
