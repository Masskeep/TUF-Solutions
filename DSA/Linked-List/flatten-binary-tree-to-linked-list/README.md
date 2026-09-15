# [Flatten Binary Tree to Linked List](https://takeuforward.org/plus/dsa/problems/flatten-binary-tree-to-linked-list?source=strivers-a2z-dsa-track&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

You are given the root of a binary tree.

Re-arrange the tree in place so that it becomes a singly linked list in-order of a preorder traversal:

- Each node’s right pointer must point to the next node in preorder.

- Each node’s left pointer must be set to null.

- The relative order of nodes must be exactly the preorder sequence of the original tree.

The transformation must be done on the original tree structure; do not create any new nodes.

### Example 1

<p>

**Input:** root = [1,2,5,3,4,null,6]</p><p>

**Output:** [1,null,2,null,3,null,4,null,5,null,6]</p><p>

**Explanation:** </p>Preorder of original tree: 1-2-3-4-5-6 → the same order appears in the list.

### Example 2

<p>

**Input:** &nbsp;root = []</p><p>

**Output:** []</p><p>

**Explanation:** An empty tree stays empty.</p>

### Constraints

- 0 ≤ number of nodes ≤ 2000
- -100 ≤ Node.val ≤ 100

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
