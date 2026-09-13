# [Children Sum Property in Binary Tree](https://takeuforward.org/plus/dsa/problems/children-sum-property-in-binary-tree?source=strivers-a2z-dsa-track&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given the root of a binary tree, return true if and only if every node’s value is equal to the sum of the values stored in its left and right children.

- For any missing ( null ) child, its value is treated as 0.
- A leaf node automatically satisfies the rule because both children are null.

### Example 1

<p>

**Input:** root = [1,4,3,5]</p><p>

**Output:** false</p><p>

**Explanation:** </p>
- The root is 1, but its children sum to 4 + 3 = 7. Since 1 ≠ 7, the tree violates the property.

### Example 2

<p>

**Input:** root = [10,4,6,1,3,2,4]</p><p>

**Output:** true</p><p>

**Explanation:** </p>
- 4 = 1 + 3
- 6 = 2 + 4
- 10 = 4 + 6
- All internal nodes satisfy the condition.

### Example 3

<p>

**Input:** root = [35,20,15,15,5,10,5]</p>Output:

true

### Constraints

1 ≤ n ≤ 10^4 (n = number of nodes `)

-10^5 ≤ Node.val ≤ 10^5

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
