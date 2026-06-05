
# Minimum Depth of Binary Tree
This repository includes basic algorithms to calculate the min depth of a BiTree.
The **minimum depth** of a binary tree refers to the number of nodes along the shortest path from the root node down to the nearest leaf node.

## Approaches
- **Recursive method**: Transform the problem into subproblems of left and right subtrees.
- **BFS (Level-order traversal)**: Traverse level by level to find the first leaf node, which gives the minimum depth.

## Files
- **TreeNode.h** - Defines the data structure of tree nodes.
- **minDepthRecursion.c** - Implements the recursive approach.
- **BFSminDepth.c** - Implements the level-order traversal (BFS) method.
