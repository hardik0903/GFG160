# 👋 Hello, I'm Hardik.


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
  - [Day 7: Stock Buy and Sell – Multiple Transaction Allowed](#day-7-stock-buy-and-sell--multiple-transaction-allowed)
  - [Day 8: Stock Buy and Sell – Max one Transaction Allowed](#day-8-stock-buy-and-sell--max-one-transaction-allowed)
  - [Day 9: Minimize the Heights II](#day-9-minimize-the-heights-ii)
  - [Day 10: Kadane's Algorithm](#day-10-kadanes-algorithm)
  - [Day 11: Maximum Product Subarray](#day-11-maximum-product-subarray)
  - [Day 12: Max Circular Subarray Sum](#day-12-max-circular-subarray-sum)
  - [Day 13: Smallest Positive Missing Number](#day-13-smallest-positive-missing-number)
   - [Day 14: My Atoi Implementation](#day-14-my-atoi-implementation)
   - [Day 15: Add Binary Strings](#day-15-add-binary-strings)
   - [Day 16: Anagram](#day-16-anagram)
   - [Day 17: First Non Repeating Character](#day-17-first-non-repeating-character)
   - [Day 18: Search Pattern](#day-18-search-pattern)  
  - [Day 19: Minimum Characters to Be Added at Front to Make String Palindrome](#day-19-minimum-characters-to-be-added-at-front-to-make-string-palindrome)  
  - [Day 20: Strings Rotations of Each Other](#day-20-strings-rotations-of-each-other)
  - [Day 21: Sort 0's, 1's, 2's](#day-21-sort-colors)
  - [Day 22: Find H-Index](#day-22-Find-H-Index)
  - [Day 23: Count Inversion](#day-23-count-inversion)
  - [Day 28: Number of Occurrences](#day-28-number-of-occurrences)
  - [Day 29: Find Minimum in Rotated Sorted Array](#day-29-find-minimum-in-rotated-sorted-array)
  - [Day 30: Search in Sorted Rotated Array](#day-30-search-in-sorted-rotated-array)
  - [Day 31: Peak Element](#day-31-peak-element)
  - [Day 32: K-th of Two Arrays](#day-32-k-th-of-two-arrays)
  - [Day 33: Aggressive Cows](#day-33-aggressive-cows)
  - [Day 24: Overlapping Intervals](#day-24-overlapping-intervals)
  - [Day 25: Insert Intervals](#day-25-insert-intervals)
  - [Day 26: Non-Overlapping Intervals](#day-26-non-overlapping-intervals)
  - [Day 27: Merge Without Extra Space](#day-27-merge-without-extra-space)

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
   - **Place:** it at the current non-zero index.  
4. After iteration, **fill** the remaining positions in the array with zeroes. 🔢

---  

### Day 3: Reverse An Array  
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/reverse-an-array)

A classic problem whose solution is foundational for many other challenges.  
**Problem:** Reverse the order of elements in an array.  
**Approach (PseudoCode):**  
1. **Set:** two pointers: `i` at the start (0) and `j` at the end (last index).  
2. **Swap:** the elements at positions `i` and `j` using a temporary variable.  
3. **Increment:** `i` and **decrement:** `j` until they meet or cross.  
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

A problem that extends the Boyer-Moore Voting Algorithm (Majority-Element I).  
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

### Day 7: Stock Buy and Sell – Multiple Transaction Allowed  
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/stock-buy-and-sell2615)

This challenge focuses on maximizing profit by allowing multiple stock transactions. 📈  
**Problem:** Given an array of stock prices where the index represents the day, find the maximum profit that can be earned by making multiple buy-sell transactions.  
**Approach (PseudoCode):**  
1. **Initialize:**  
   - A variable `profit` to 0.  
2. **Iterate:**  
   - Loop through the array from day 1 to the last day.  
3. **Check:**  
   - For each day, if the price of the current day is greater than the previous day, it indicates an opportunity for profit.  
4. **Accumulate:**  
   - Add the difference (current day price minus previous day price) to `profit`.  
5. **Result:**  
   - The accumulated `profit` is the maximum profit obtainable. 💰

---  

### Day 8: Stock Buy and Sell – Max one Transaction Allowed  
(https://www.geeksforgeeks.org/problems/buy-stock-2/0)

A well-known optimization problem involving dynamic programming or a greedy approach.  
**Problem:** Given an array representing stock prices on each day, find the maximum profit that can be made by buying and selling the stock **once**.  
**Approach (PseudoCode):**  
1. **Initialize:**  
   - A variable `minPrice` to store the minimum stock price seen so far (initially set to a very large value).  
   - A variable `maxProfit` to store the maximum profit (initially set to 0).  
2. **Iterate:**  
   - Loop through each day's stock price.  
3. **Check:**  
   - If the current price is less than `minPrice`, update `minPrice`.  
   - Else, calculate profit = current price - `minPrice`, and update `maxProfit` if this profit is greater.  
4. **Result:**  
   - The value in `maxProfit` is the maximum profit achievable with one transaction. 📊

---  

### Day 9: Minimize the Heights II  
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/minimize-the-heights3351)

A greedy-style problem involving height adjustments.  
**Problem:** Given an array representing tower heights and a value `k`, modify each height by either increasing or decreasing it by `k` and find the minimum difference between the tallest and shortest towers after modification.  
**Approach (PseudoCode):**  
1. **Sort** the array to get a baseline for heights.  
2. **Initialize:**  
   - `minHeight` and `maxHeight` to hold possible extremes after modifications.  
   - `ans` to hold the initial height difference (i.e., `arr[n - 1] - arr[0]`).  
3. **Iterate** from index 1 to n-1:  
   - Skip if subtracting `k` results in negative height.  
   - Calculate new `minHeight = min(arr[0] + k, arr[i] - k)`  
   - Calculate new `maxHeight = max(arr[i - 1] + k, arr[n - 1] - k)`  
   - Update `ans` with the minimum of current `ans` and `maxHeight - minHeight`  
4. **Return:** Final minimized height difference.

---  

### Day 10: Kadane's Algorithm  
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/kadanes-algorithm-1587115620)

A classic dynamic programming challenge used to find the maximum contiguous subarray sum. 💡  
**Problem:**  
Find the contiguous subarray within a one-dimensional array of numbers that has the largest sum.

**Approach (PseudoCode):**  
1. **Initialize:**  
   - `max_sum` with the value of the first element.  
   - `currentMax` with the value of the first element.  
2. **Iterate:**  
   - For every element from the second element onward:  
     - Update `currentMax = max(current element, currentMax + current element)` ⚡  
     - Update `maxSoFar = max(max_sum, currentMax)` 🔥  
3. **Result:**  
   - Return `max_sum` as the maximum subarray sum.

---  

### Day 11: Maximum Product Subarray  
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/maximum-product-subarray3604)

A challenging variation of the maximum subarray sum, where we find the subarray with the **maximum product** instead.  
**Problem:**  
Find the contiguous subarray within an array (containing at least one number) which has the largest product.

**Approach (PseudoCode):**  
1. **Initialize:**  
   - `prefixProduct` and `suffixProduct` to 1.  
   - `maxProduct` to `INT_MIN`.  
   - `n` as the size of the array.  
2. **Iterate:**  
   - From `i = 0` to `n-1`:  
     - Multiply `prefixProduct` with `arr[i]`  
     - Multiply `suffixProduct` with `arr[n-i-1]`  
     - Update `maxProduct = max(maxProduct, max(prefixProduct, suffixProduct))`  
     - If `prefixProduct == 0`, reset to 1  
     - If `suffixProduct == 0`, reset to 1  
3. **Result:**  
   - Return `maxProduct` as the maximum product subarray.

---  

### Day 12: Max Circular Subarray Sum  
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/max-circular-subarray-sum-1587115620)

A twist on the classic maximum subarray problem where the array is considered circular. 🔄  
**Problem:**  
Find the maximum subarray sum in a circular array.

**Approach (PseudoCode):**  
1. **Compute the total sum** of the array.  
2. **Find the maximum subarray sum** using Kadane's algorithm.  
3. **Find the minimum subarray sum** using a modified version of Kadane's algorithm.  
4. **Determine the result:**  
   - If the total sum equals the minimum subarray sum (i.e., all elements are negative), return the maximum subarray sum.  
   - Otherwise, return the greater value between the normal maximum subarray sum and `(total sum - minimum subarray sum)`. 💥🎉

---  

### Day 13: Smallest Positive Missing Number  
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/smallest-positive-missing-number-1587115621)

A problem to find the smallest positive missing number in an array.  
**Problem:**  
Identify the smallest positive integer that is not present in the array.

**Approach (PseudoCode):**  
1. **Sort** the array to arrange all elements in ascending order.  
2. **Initialize** a variable (say, `x`) to `1`.  
3. **Iterate** over the sorted array:  
   - If the current element equals `x`, increment `x`.  
   - If an element greater than `x` is encountered, break the loop since `x` is missing.  
4. **Result:**  
   - The value of `x` at the end of the loop is the smallest positive missing number. 🚀

---


### Day 14: My Atoi Implementation  
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/string-gfg-160/problem/implement-atoi)

This challenge deals with converting a string to an integer, emulating the behavior of the standard `atoi` function.  
**Problem:**  
Implement a function to convert a string into an integer, handling whitespaces, optional signs, numeric digits, and potential overflows correctly.  

**Approach (PseudoCode):**  
1. **Trim:**  
   - Remove any leading whitespace characters from the string.  
2. **Determine Sign:**  
   - Check for an optional '+' or '-' sign to determine whether the resulting integer should be positive or negative.  
3. **Convert Digits:**  
   - Iterate over the subsequent characters as long as they are numeric digits (`'0'` to `'9'`).  
   - For each digit, convert it to its numeric value and update the result by multiplying the current result by 10 and adding the new digit.  
4. **Overflow Check:**  
   - Before updating the result, verify that appending the new digit will not cause an integer overflow.  
   - If an overflow is detected, return `INT_MAX` for positive numbers or `INT_MIN` for negative numbers, as appropriate.  
5. **Combine:**  
   - Multiply the final number by the determined sign to get the correct result.  
6. **Result:**  
   - Return the computed integer value.

---

### Day 15: Add Binary Strings 
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/string-gfg-160/problem/add-binary-strings3805)

**Problem**
We are given two binary strings `a` and `b`. The task is to compute their sum as a binary string. The strings represent non-negative binary numbers, and the sum should also be in binary form. The challenge includes handling carry, and ensuring that there are no leading zeros in the result.

**Approach (Pseudocode):**
1. **Reverse both strings**:
   - In binary addition, we start from the rightmost bit. To simplify, we reverse both strings, so the least significant bit is at the beginning of the string.
   
2. **Add corresponding bits and handle carry**:
   - Initialize a variable `carry` to zero.
   - Traverse the reversed strings bit by bit, adding corresponding bits. If the sum of the two bits and the carry is greater than 1, set `carry` to 1 for the next iteration; otherwise, set `carry` to 0.
   - For each addition, append the result to the `res` string (the binary result string).
   
3. **Remove leading zeros**:
   - After calculating the sum, reverse the result string to return the binary number in its correct order.
   - If the result has any leading zeros, remove them. If the result is all zeros, return "0".

---

### Day 16: Anagram  
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/string-gfg-160/problem/anagram-1587115620)

This challenge involves checking whether two given strings are anagrams.  
**Problem:**  
Given two strings consisting of lowercase characters, determine if they are anagrams of each other. Two strings are anagrams if they have the same characters with the same frequency, but possibly in a different order.

**Approach (PseudoCode):**  
1. **Length Check:**  
   - If the lengths of the two strings are different, they cannot be anagrams.  
2. **Frequency Count:**  
   - Initialize an array (or hash map) of size 26 (for 'a' to 'z') with all values set to 0.  
   - Iterate over the first string, and for each character, increment its corresponding counter.  
   - Iterate over the second string, and for each character, decrement its corresponding counter.  
3. **Verification:**  
   - Traverse the frequency array. If any count is not zero, the strings are not anagrams.  
   - Otherwise, the strings are anagrams.  
4. **Result:**  
   - Return true if the strings are anagrams; otherwise, return false.

---

## Day 17: First Non Repeating Character

(https://www.geeksforgeeks.org/problems/non-repeating-character-1587115620/1)

**Problem Statement**:  
Given a string `S`, find the first non-repeating character in it and return it. If all characters are repeating, then return `-1`.

**Approach**:
- Use a queue to store characters in order and an array `freq[26]` to track frequency of each character.
- Traverse the string:
  - Increment frequency of current character.
  - Push it into the queue.
  - While the front of the queue has `freq > 1`, pop it.
- After the loop, if queue is not empty, return `q.front()`. Otherwise, return `-1`.

---

### Day 18: Search Pattern  
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/string-gfg-160/problem/search-pattern0205)  

**Problem:** Given a text `txt` and a pattern `pat`, find all starting indices of occurrences of `pat` in `txt`.  

**Approach (PseudoCode):**  
1. **Build LPS:** Compute LPS array for `pat`.  
2. **Search:**  
   - Initialize `i = 0, j = 0`.  
   - While `i < txt.length()`:  
     - If `txt[i] == pat[j]`: `i++; j++;`  
     - If `j == pat.length()`:  
       - Record match at `i - j`  
       - `j = lps[j - 1]`  
     - Else if mismatch and `j > 0`:  
       - `j = lps[j - 1]`  
     - Else:  
       - `i++`  

---

### Day 19: Minimum Characters to Be Added at Front to Make String Palindrome  
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/string-gfg-160/problem/minimum-characters-to-be-added-at-front-to-make-string-palindrome)  

**Problem:** Given a string `s`, determine the minimum number of characters to add at the front to make `s` a palindrome.  

**Approach (PseudoCode):**  
1. Let `rev = reverse(s)`.  
2. Form `combined = s + "#" + rev`.  
3. Compute LPS array for `combined`.  
4. Answer = `s.length() - lps.back()`.  

---

### Day 20: Strings Rotations of Each Other  
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/string-gfg-160/problem/check-if-strings-are-rotations-of-each-other-or-not-1587115620)

**Problem:**  
Given two strings `s1` and `s2` of equal length, determine if `s2` is a rotation of `s1`.

**Approach (PseudoCode):**  
1. **Length Check:**  
   - If `s1.length() != s2.length()`, return `false`.  
2. **Concatenate:**  
   - `doubled = s1 + s1`  
3. **KMP Search:**  
   - **Compute LPS** array for pattern `s2`.  
   - **Scan** through `doubled` with pointers `i` (text) and `j` (pattern):  
     - If characters match, increment both.  
     - On full pattern match (`j == s2.length()`), return `true`.  
     - On mismatch with `j > 0`, fallback `j = lps[j-1]`; else increment `i`.  
4. **Result:**  
   - If no match found, return `false`.  

---

### Day 21: Sort Colors
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/sorting-gfg-160/problem/sort-an-array-of-0s-1s-and-2s4231)

**Problem:**
Given Array consisting of 0's, 1's, 2's and we need to sort them in ascending order.

**Approach (Pseudocode):**
1.Initialize low, mid, high
2.Use switch case aproach to replace multiple if-case and give 3 cases:
   2.1 if 0: swap with low, and move low and mid
   2.2 if 1: nothing here just move mid
   2.3 if 2: swap with high, and move high not mid

---

### Day 22: Find H Index
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/sorting-gfg-160/problem/find-h-index--165609)

**Problem:**

Given Array we need to find H-Index with H-Number of citations

**Approach (Pseudocode):**
1.Sort the array of citations in descending order.
2.Scan the sorted list and look for the last position where >=i+1 condition exist.
3.Return that i+1.

---

### Day 23: Count Inversion
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/sorting-gfg-160/problem/inversion-of-array-1587115620)

**Problem:**
Given Array We need to find elements more than its next ones.

**Approach (Pseudocode):**
1.Divide the array using Merge Sort until each subarray has one element.
2.While merging, count inversions when an element from the right subarray is smaller than one from the left (since it means all remaining left-side elements form inversions).
3.Merge and count inversions recursively, summing them to get the total inversion count.

---

## Day 24: Overlapping Intervals
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/sorting-gfg-160/problem/overlapping-intervals--170633)

*Problem:* Given a collection of intervals, merge all overlapping intervals.

*Approach (PseudoCode):*

- Sort the intervals based on their starting times.
- Iterate through sorted intervals, merging the current with the last merged interval if they overlap.
- If no overlap, add the current interval as a new merged interval.

---

## Day 25: Insert Intervals
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/sorting-gfg-160/problem/insert-interval-1666733333)

*Problem:* Given a set of non-overlapping intervals and a new interval, insert the new interval into the intervals such that the intervals remain sorted and non-overlapping.

*Approach (PseudoCode):*

---

## Day 26: Non-Overlapping Intervals
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/sorting-gfg-160/problem/non-overlapping-intervals)

*Problem:* Given a collection of intervals, find the minimum number of intervals to remove to make the rest of the intervals non-overlapping.

*Approach (PseudoCode):*

- Sort the intervals by their ending times.
- Iterate, counting non-overlapping intervals by greedily picking the one with the earliest end time.
- The minimum removals needed is the total number of intervals minus the maximum count of non-overlapping intervals.

---

## Day 27: Merge Without Extra Space
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/sorting-gfg-160/problem/merge-two-sorted-arrays-1587115620)

*Problem:* Given two sorted arrays a and b, merge them into a single sorted array without using any extra space.

*Approach (PseudoCode):*

- Use two pointers, one starting from the end of a and one from the beginning of b.
- Swap elements if a[i] is greater than b[j], then move pointers.
- After the loop, sort both arrays individually to finalize the merge.
-

---

## Day 28: Number of Occurrences
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/searching-gfg-160/problem/number-of-occurrence2259)

*Problem:* Given a sorted array arr and a target value, find the number of times target appears in the array.

*Approach (PseudoCode):*

- Use binary search (lower_bound) to find the index of the first occurrence of target.
- Use binary search (upper_bound) to find the index of the first element strictly greater than target.
- The number of occurrences is the difference between these two indices.

---

## Day 29: Find Minimum in Rotated Sorted Array
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/searching-gfg-160/problem/minimum-element-in-a-sorted-and-rotated-array3611)

*Problem:* Find the minimum element in a sorted array that has been rotated at some unknown pivot.

*Approach (PseudoCode):*

- Apply binary search.  
- If the current segment is sorted (arr[low] <= arr[high]), arr[low] is the minimum.  
- Otherwise, consider mid:  
  - If arr[mid] < arr[low], the minimum is in the left half (including mid).  
  - If arr[mid] >= arr[low], the minimum must be in the right half.

---

## Day 30: Search in Sorted Rotated Array
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/searching-gfg-160/problem/search-in-a-rotated-array4618)

*Problem:* Search for a given key in a sorted array that has been rotated at some unknown pivot.

*Approach (PseudoCode):*

- Perform a modified binary search to navigate the rotated array.  
- At each step, identify which half of the array (left or right of mid) is sorted.  
- If key falls within the range of the sorted half, search there; otherwise, search in the unsorted half.

---

## Day 31: Peak Element
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/searching-gfg-160/problem/peak-element)

*Problem:* Find an index of a peak element in an array, where a peak is strictly greater than its neighbors.

*Approach (PseudoCode):*

- Use binary search.  
- Handle array boundaries by conceptually treating elements outside bounds as negative infinity.  
- If arr[mid] is greater than both its left and right neighbors, mid is a peak.  
- Adjust the search to the left or right based on whether the right neighbor is larger (move right) or the left neighbor is larger/equal (move left).

---

## Day 32: K-th of Two Arrays
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/searching-gfg-160/problem/k-th-element-of-two-sorted-array1317)

*Problem:* Find the K-th smallest element in two sorted arrays, arr1 and arr2.

*Approach (PseudoCode):*

- Ensure arr1 is the smaller array to optimize binary search.  
- Perform binary search on possible partitions of arr1.  
- Calculate the corresponding partition in arr2 such that the total number of elements in the left partitions sums to K.  
- Adjust the binary search boundaries until the elements in the left partitions are all less than or equal to the elements in the right partitions, then the K-th element is found.
-

---

## Day 33: Aggressive Cows
(https://www.geeksforgeeks.org/batch/gfg-160-problems/track/searching-gfg-160/problem/aggressive-cows)

*Problem:* Given N stalls and K cows, place cows to maximize the minimum distance between any two.

*Approach (PseudoCode):*

- Sort the stalls array.  
- The problem can be solved by binary searching on the answer (the minimum distance).  
- Define a helper function canPlace(distance):  
  - It greedily places cows, returning true if K cows can be placed with distance as the minimum separation.  
- In the binary search, if canPlace(mid_distance) is true, try for a larger distance; otherwise, try a smaller one.


---

## Conclusion

This README summarizes my approach to the **GFG160 Days Challenge**. Each day presents a unique problem and an opportunity to learn and grow as a coder. I look forward to sharing more insights and solutions as I progress through this exciting challenge! 🚀

> **Happy Coding!**  
*Feel free to explore my repositories and connect with me on GitHub or LinkedIn.*
