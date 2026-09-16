# [Isomorphic String](https://takeuforward.org/plus/dsa/problems/isomorphic-string?source=strivers-a2z-dsa-track&tab=submissions)

![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

Given two strings **s** and **t** , determine if they are **isomorphic** . Two strings s and t are **isomorphic** if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

### Example 1

<p>

**Input:** s = "egg" , t = "add"</p><p>

**Output:** true</p><p>

**Explanation:** </p>The 'e' in string s can be replaced with 'a' of string t.

The 'g' in string s can be replaced with 'd' of t.

Hence all characters in s can be replaced to get t.

### Example 2

<p>

**Input:** s = "apple" , t = "bbnbm"</p><p>

**Output:** false</p><p>

**Explanation:** </p>Strings are matched **index by index** .

At index 0, 'a' maps to 'b'.

At index 1, 'p' also maps to 'b'.

This is invalid because **two different characters (a and p) cannot map to the same character (b)** in a one-to-one mapping.

Therefore, no valid mapping exists and the output is false.

### Example 3

<p>

**Input:** s = "paper" , t = "title"</p>Output:

true

### Constraints

- 1 <= s.length <= 10^3
- s.length == t.length
- s and t consist of only lowercase English letters.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
