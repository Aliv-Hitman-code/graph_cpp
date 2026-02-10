# Graph Algorithms in C++

A comprehensive collection of graph theory algorithms and data structures implemented in C++. This repository contains implementations of fundamental graph concepts, traversal algorithms, shortest path algorithms, and minimum spanning tree algorithms.

## 📁 Repository Structure

```
graph_cpp/
├── class_1/          # Basic Graph Fundamentals
├── class_2/          # Graph Matrices & Path Algorithms
├── class_3/          # Graph Traversal Algorithms
└── class_4/          # Advanced Graph Algorithms
```

---

## 📚 Contents

### Class 1: Graph Fundamentals

#### 1. **graph.cpp**
- Basic adjacency matrix representation
- Manual input of adjacency matrix
- Display of graph structure

#### 2. **test.cpp**
- Basic I/O testing program
- Variable declaration and usage examples

---

### Class 2: Graph Matrices & Path Algorithms

#### 1. **adjacecncy_matrix.cpp**
- Adjacency matrix creation for undirected graphs
- Dynamic edge input (source and destination vertices)
- Matrix display functionality

#### 2. **adjacency_matrix_letter.cpp**
- Adjacency matrix using character vertices (A, B, C, etc.)
- ASCII conversion for character-based graph representation
- Useful for labeled graph problems

#### 3. **costGraph.cpp**
- Weighted graph representation
- Cost/weight matrix with zero initialization
- Directed graph implementation

#### 4. **costGraph_infinity.cpp**
- Cost matrix with infinity representation (999)
- Diagonal elements set to 0
- Used for shortest path algorithms preparation

#### 5. **warshall.cpp**
- **Warshall's Algorithm** - Transitive closure of a directed graph
- Finds reachability between all pairs of vertices
- Uses bitwise OR operations for path detection
- **Time Complexity**: O(V³)
- **Space Complexity**: O(V²)

#### 6. **floyed_warshall.cpp**
- **Floyd-Warshall Algorithm** - All-pairs shortest path
- Computes shortest distances between all vertex pairs
- Handles positive and negative edge weights (no negative cycles)
- **Time Complexity**: O(V³)
- **Space Complexity**: O(V²)

---

### Class 3: Graph Traversal Algorithms

#### 1. **dfs.cpp** (Depth-First Search)
- Recursive DFS implementation using adjacency matrix
- Visited array to track traversed vertices
- Connected components detection
- **Time Complexity**: O(V²) for adjacency matrix
- **Space Complexity**: O(V) for recursion stack

**Features:**
- User-defined starting vertex
- Counts number of connected components
- Handles disconnected graphs

#### 2. **bfs.cpp** (Breadth-First Search)
- Queue-based BFS implementation
- Level-order traversal
- Connected components detection
- **Time Complexity**: O(V²) for adjacency matrix
- **Space Complexity**: O(V) for queue

**Features:**
- Custom queue implementation with enqueue/dequeue
- Handles disconnected graphs
- Component counting

#### 3. **bfs_me.cpp**
- Alternative BFS implementation
- Simplified queue operations
- Single component traversal

---

### Class 4: Advanced Graph Algorithms

#### 1. **djikstra.cpp** (Dijkstra's Algorithm)
- Single-source shortest path algorithm
- Works with non-negative edge weights only
- Character-based vertex naming (A, B, C, etc.)
- **Time Complexity**: O(V²)
- **Space Complexity**: O(V)

**Features:**
- Shortest path from source to all vertices
- Path reconstruction (prints complete path)
- Distance calculation for each vertex

#### 2. **prims.cpp** (Prim's Algorithm)
- Minimum Spanning Tree (MST) algorithm
- Greedy approach - grows tree from starting vertex
- Best for dense graphs
- **Time Complexity**: O(V²)
- **Space Complexity**: O(V)

**Features:**
- Minimum cost spanning tree construction
- Total cost calculation
- Character-based vertex representation

#### 3. **kruskals.cpp** (Kruskal's Algorithm)
- Minimum Spanning Tree (MST) algorithm
- Greedy approach - sorts edges by weight
- Uses Union-Find (Disjoint Set) data structure
- Best for sparse graphs
- **Time Complexity**: O(E log E) or O(E²) in this implementation
- **Space Complexity**: O(V)

**Features:**
- Edge-based MST construction
- Cycle detection using parent array
- Minimum cost calculation

#### 4. **matrix_conversion.cpp**
- Converts adjacency matrix to incidence matrix
- Demonstrates different graph representations
- Useful for understanding graph theory concepts

**Conversions:**
- **Adjacency Matrix**: V×V matrix showing vertex connections
- **Incidence Matrix**: V×E matrix showing vertex-edge relationships

---

## 🚀 Compilation & Execution

### Prerequisites
- C++ compiler (g++, clang++, or similar)
- C++11 or higher recommended

### Compilation
```bash
# Navigate to the specific class directory
cd class_3

# Compile a program
g++ dfs.cpp -o dfs

# Or use g++-15 if available
g++-15 -fdiagnostics-color=always -g dfs.cpp -o dfs
```

### Execution
```bash
# Run the compiled program
./dfs
```

### Example: Running DFS
```bash
cd class_3
g++ dfs.cpp -o dfs
./dfs

# Sample Input:
# Vertices: 5
# Edges: 4
# Edges: 1-2, 2-3, 3-4, 4-5
# Starting vertex: 1
```

---

## 📊 Algorithm Comparison

| Algorithm | Type | Time Complexity | Use Case |
|-----------|------|----------------|----------|
| DFS | Traversal | O(V + E) | Path finding, cycle detection, topological sort |
| BFS | Traversal | O(V + E) | Shortest path (unweighted), level-order traversal |
| Dijkstra | Shortest Path | O(V²) | Single-source shortest path (non-negative weights) |
| Floyd-Warshall | Shortest Path | O(V³) | All-pairs shortest path |
| Prim's | MST | O(V²) | Dense graphs, connected graphs |
| Kruskal's | MST | O(E log E) | Sparse graphs, edge-based approach |
| Warshall | Transitive Closure | O(V³) | Reachability analysis |

---

## 🎯 Key Concepts Covered

### Graph Representations
- **Adjacency Matrix**: 2D array representation (space: O(V²))
- **Incidence Matrix**: Vertex-edge relationship matrix
- **Cost Matrix**: Weighted graph representation

### Graph Types
- **Directed Graphs**: One-way edges
- **Undirected Graphs**: Bidirectional edges
- **Weighted Graphs**: Edges with costs/weights
- **Unweighted Graphs**: Simple connectivity

### Common Operations
- Graph creation and input
- Matrix display and manipulation
- Traversal (DFS, BFS)
- Shortest path finding
- Minimum spanning tree construction
- Connected components detection

---

## 💡 Learning Path

1. **Start with Class 1**: Understand basic graph representation
2. **Move to Class 2**: Learn about different matrix types and path algorithms
3. **Practice Class 3**: Master traversal algorithms (DFS & BFS)
4. **Advanced Class 4**: Implement shortest path and MST algorithms

---

## 📝 Input Format Guidelines

### General Format
```
Number of Vertices: V
Number of Edges: E

For each edge:
  Source Vertex: s
  Destination Vertex: d
  [Weight: w]  // For weighted graphs
```

### Vertex Numbering
- **Numeric**: Programs use 1-based indexing (vertices: 1, 2, 3, ...)
- **Alphabetic**: Some programs use characters (A, B, C, ...) with ASCII conversion

---

## ⚠️ Important Notes

1. **Array Size Limits**: Most programs use fixed-size arrays (20×20), limiting to 20 vertices
2. **Infinity Representation**: Value 999 or 9999 represents infinity/no edge
3. **Graph Type**: Most implementations assume undirected graphs unless specified
4. **1-Based Indexing**: Vertices are numbered starting from 1 (not 0)
5. **Memory**: Adjacency matrix uses O(V²) space, not efficient for sparse graphs

---

## 🛠️ Customization Tips

### To Modify for Larger Graphs
```cpp
// Change array size declarations
int graph[100][100];  // Instead of [20][20]
int visited[100];     // Instead of [20]
```

### To Use 0-Based Indexing
```cpp
// Change loop bounds
for(i=0; i<v; i++)   // Instead of i=1; i<=v
```

### To Handle Larger Weights
```cpp
// Increase infinity value
graph[i][j] = 99999;  // Instead of 999
```

---

## 🔍 Common Use Cases

- **Network Routing**: Dijkstra for shortest network paths
- **Social Networks**: DFS/BFS for connection analysis
- **Infrastructure Planning**: MST algorithms for minimum cost networks
- **Game Development**: Pathfinding algorithms
- **Transportation**: Shortest route calculations
- **Circuit Design**: Minimum spanning tree for connections

---

## 📖 References

- Introduction to Algorithms (CLRS)
- Graph Theory by Narsingh Deo
- Data Structures and Algorithm Analysis in C++ by Mark Allen Weiss

---

## 👨‍💻 Author

Graph algorithms implementation for academic learning and practice.

---

## 📄 License

Educational purposes - Free to use and modify for learning.

---

**Happy Learning! 🎓**
