# 👋 Hello, I'm Hardik

Welcome to my journey of completing the **GFG160 Days Challenge**. This repository documents my experiences, solutions, and learnings as I tackle various coding challenges every day. 🚀

---

## 📇 Profiles

- [![GitHub followers](https://img.shields.io/github/followers/hardik0903?style=social)](https://github.com/hardik0903)  
- [![LinkedIn](https://img.shields.io/badge/LinkedIn-HardikPandey-blue?logo=linkedin)](https://www.linkedin.com/in/hardik-pandey-4a836628a/)  
- [![Email](https://img.shields.io/badge/Email-hardikpandey0903@gmail.com-c14438?logo=gmail)](mailto:hardikpandey0903@gmail.com)

---

## 📅 Table of Contents

- [Introduction](#introduction)
- [Challenge Overview](#challenge-overview)
  - [Day 1: Second Largest Element](#day-1-second-largest-element)
  - [Day 2: Move All Zeroes to End](#day-2-move-all-zeroes-to-end)
  - [Day 3: Reverse An Array](#day-3-reverse-an-array)
  - [Day 4: Rotate Array](#day-4-rotate-array)
  - [Day 5: Next Permutation](#day-5-next-permutation)
  - [Day 6: Majority Element II](#day-6-majority-element-ii)
- [Conclusion](#conclusion)

---

## Introduction

Hello! I'm Hardik, a passionate coder who loves challenges and problem solving. I embarked on the **GFG160 Days Challenge** to improve my coding skills and deepen my understanding of arrays and algorithms. Enjoy the ride as I document each day’s challenge and share my approach! 😊

---

## Challenge Overview

### Day 1: Second Largest Element  
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/second-largest3735)

An easy but tricky problem solved through a straightforward approach.  
**Problem:** Find the second largest element in an array.  
**Approach (PseudoCode):**

1. **Declare** two variables: `largest` and `secondLargest`.
2. **Iterate** over the array.
3. If an element greater than `largest` occurs:
   - **Update:** Set `secondLargest` to the current value of `largest`.
   - **Assign:** Update `largest` with the new element.
4. Else if the element is greater than `secondLargest` but smaller than `largest`:
   - **Update:** Set `secondLargest` with this new element.
5. **Result:** The value in `secondLargest` is the answer. 👍

---

### Day 2: Move All Zeroes to End  
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/move-all-zeroes-to-end-of-array0751)

A fun problem that reinforces the concept of array manipulation.  
**Problem:** Rearrange the array so that all zeroes are moved to the end while maintaining the order of non-zero elements.  
**Approach (PseudoCode):**

1. **Initialize** a pointer for the non-zero index.
2. **Iterate** through the array.
3. If a non-zero element is found:
   - **Place** it at the current non-zero index.
4. After iteration, **fill** the remaining positions in the array with zeroes. 🔢

---

### Day 3: Reverse An Array  
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/reverse-an-array)

A classic problem whose solution is foundational for many other challenges.  
**Problem:** Reverse the order of elements in an array.  
**Approach (PseudoCode):**

1. **Set** two pointers: `i` at the start (0) and `j` at the end (last index).
2. **Swap** the elements at positions `i` and `j` using a temporary variable.
3. **Increment** `i` and **decrement** `j` until they meet or cross.
4. **Result:** The array is reversed. 🔄

---

### Day 4: Rotate Array  
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/rotate-array-by-n-elements-1587115621)

A variation of the classic array rotation problem with a twist inspired by a LeetCode challenge.  
**Problem:** Rotate the array by a given number of positions using a modified approach.  
**Approach (PseudoCode):**

1. **Implement:** Create a function that reverses a subarray from a specified start to end index.
2. **Rotate:** Utilize the reverse array function with the following steps:
   - Reverse the portion of the array to be rotated.
   - Reverse the remaining portion.
   - Reverse the entire array.
3. **Note:** The order of operations is adjusted from the standard LeetCode approach (i.e., from steps 1, 2, 3 to 2, 3, 1) as per GFG requirements. 🔄➡️

---

### Day 5: Next Permutation  
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/next-permutation5226)

An easy optimal approach but difficulty in brute-force approach as it requires backtracking skills, whereas a better approach uses swapping.  
**Problem:** Calculate the next permutation of the given array.  
**Approach (PseudoCode):**

1. **Loop:** Start from the second last index and move backwards to find the first element that is smaller than its next element.
2. **Condition:** If such an element is not found, reverse the entire array.
3. **Loop:** Otherwise, from the end of the array, find the first element that is greater than this identified element and swap them.
4. **Finally:** Reverse the subarray following the swapped element's original position.
5. **Result:** The array is updated to its next permutation.

---

### Day 6: Majority Element II  
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/majority-vote)

A problem that extends the Boyer-Moore Voting Algorithm(Majority-Element I).  
**Problem:** Find all elements in the array that appear more than ⌊n/3⌋ times.  
**Approach (PseudoCode):**

1. **Initialize:**  
   - Two candidate variables `el1` and `el2` (e.g., set to `INT_MIN`).
   - Two counters `count1` and `count2` set to 0.
2. **Candidate Selection:**  
   - **Iterate** over the array:
     - If the current element equals `el1`, increment `count1`.
     - Else if it equals `el2`, increment `count2`.
     - Else if `count1` is 0, set `el1` to the current element and `count1` to 1.
     - Else if `count2` is 0, set `el2` to the current element and `count2` to 1.
     - Else, decrement both `count1` and `count2`.
3. **Validation:**  
   - Reset `count1` and `count2` to 0.
   - **Iterate** over the array to count the occurrences of `el1` and `el2`.
   - **Check:** If `count1` is greater than ⌊n/3⌋, add `el1` to the result.
   - **Check:** If `count2` is greater than ⌊n/3⌋, add `el2` to the result.
4. **Result:** Return the list of majority elements.

---

## Conclusion

This README summarizes my approach to the initial days of the **GFG160 Days Challenge**. Each day presents a unique problem and an opportunity to learn and grow as a coder. I look forward to sharing more insights and solutions as I progress through this exciting challenge! 🚀

> **Happy Coding!**

*Feel free to explore my repositories and connect with me on GitHub or LinkedIn.*
