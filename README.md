# HackerRank Algorithms Portfolio – 3rd Semester

## Student Information

| Details | Information |
|---|---|
| **Name** | Rakshita Hibare |
| **SRN** | R25EF211 |
| **Semester** | 3rd Semester |
| **Programming Language** | C++20 |
| **GitHub Repository** | https://github.com/rakshitahibare1-ship-it/HackerRank-3rdSem-Algorithm-Portfolio |
| **HackerRank Profile** | https://www.hackerrank.com/profile/rakshitahibare1 |

---

## 1. Introduction

This repository contains my solutions for the HackerRank Algorithms Portfolio activity for the 3rd semester. The activity focuses on developing algorithmic problem-solving skills using arrays, sorting, searching, and greedy techniques.

All solutions are implemented in C++20 with an emphasis on correctness, readability, and efficient use of time and memory.

---

## 2. Completed Problems

| No. | Problem | Technique | Time Complexity | Auxiliary Space |
|---|---|---|---|---|
| 1 | Mini-Max Sum | Single-pass traversal | O(N) | O(1) |
| 2 | Birthday Cake Candles | Maximum tracking and counting | O(N) | O(1) |
| 3 | Insertion Sort – Part 1 | Insertion and shifting | O(N) | O(1) |
| 4 | Binary Search | Divide and conquer | O(log N) | O(1) |
| 5 | Mark and Toys | Greedy + Sorting | O(N log N) | O(log N) |

---

# 3. Problem-wise Analysis

## 01. Mini-Max Sum

### Problem Summary
Given five integers, calculate the minimum and maximum sums that can be obtained by adding exactly four of the five integers.

### Approach
Calculate the total sum of all five values while simultaneously finding the minimum and maximum values.

- Minimum sum = Total sum − Maximum value
- Maximum sum = Total sum − Minimum value

### Complexity
- **Time:** O(N)
- **Auxiliary Space:** O(1)

### Alternative Approach
Sort the array and calculate the sum of the first four and last four elements. This takes O(N log N) time.

### Why This Approach?
The single-pass approach is more efficient because it avoids sorting.

### HackerRank
https://www.hackerrank.com/challenges/mini-max-sum/problem

---

## 02. Birthday Cake Candles

### Problem Summary
Given the heights of candles, determine how many candles have the maximum height.

### Approach
Traverse the array while maintaining the maximum height and the number of times it occurs.

Whenever a larger value is found, update the maximum and reset the count. If the current value equals the maximum, increment the count.

### Complexity
- **Time:** O(N)
- **Auxiliary Space:** O(1)

### Alternative Approach
Sort the array and count how many elements are equal to the last element. This requires O(N log N) time.

### Why This Approach?
A single traversal is sufficient and avoids unnecessary sorting.

### HackerRank
https://www.hackerrank.com/challenges/birthday-cake-candles/problem

---

## 03. Insertion Sort – Part 1

### Problem Summary
Insert the last element of an array into its correct position in an already sorted portion by shifting larger elements.

### Approach
Store the last element as the value to be inserted. Compare it with elements from right to left and shift larger elements one position to the right until the correct position is found.

### Complexity
- **Time:** O(N) for the required shifting operation
- **Auxiliary Space:** O(1)

### Alternative Approach
A general insertion sort can repeatedly insert each element into the sorted portion. Its worst-case time complexity is O(N²).

### Why This Approach?
The problem specifically requires inserting one element into an already sorted portion, so shifting is direct and efficient.

### HackerRank
https://www.hackerrank.com/challenges/insertionsort1/problem

---

## 04. Binary Search

### Problem Summary
Search for a target value in a sorted array using the binary search technique.

### Approach
Maintain two pointers representing the current search range. Calculate the middle element and compare it with the target.

- If the middle element equals the target, return its index.
- If it is smaller, search the right half.
- If it is larger, search the left half.

### Complexity
- **Time:** O(log N)
- **Auxiliary Space:** O(1)

### Alternative Approach
Linear search can check every element one by one, but it requires O(N) time.

### Why This Approach?
Binary search eliminates half of the remaining search space after every comparison, making it much faster for sorted arrays.

---

## 05. Mark and Toys

### Problem Summary
Given prices of toys and a fixed budget, determine the maximum number of toys that can be purchased.

### Approach
Sort the toy prices in ascending order and purchase the cheapest toys first while the budget allows.

This is a greedy strategy because buying cheaper toys first maximizes the number of toys purchased.

### Complexity
- **Time:** O(N log N)
- **Auxiliary Space:** O(log N)

### Alternative Approach
Repeatedly finding the cheapest remaining toy without sorting would require additional searching and can be less efficient.

### Why This Approach?
Sorting allows the cheapest toys to be considered first, guaranteeing the maximum number of purchases for the given budget.

### HackerRank
https://www.hackerrank.com/challenges/mark-and-toys/problem

---

# 4. Algorithmic Techniques Learned

Through these problems, I practiced several important algorithmic techniques:

- Array traversal
- Minimum and maximum tracking
- Counting occurrences
- Element shifting
- Insertion-based sorting
- Binary search
- Sorting
- Greedy algorithms
- Time and space complexity analysis

These problems helped me understand that selecting the correct algorithm can significantly improve program efficiency.

---

# 5. Evidence of Completed Challenges

Screenshots of accepted submissions are maintained as evidence for the completed HackerRank challenges.

### Problem 1 – Mini-Max Sum
Accepted submission screenshot: To be attached.

### Problem 2 – Birthday Cake Candles
Accepted submission screenshot: To be attached.

### Problem 3 – Insertion Sort – Part 1
Accepted submission screenshot: To be attached.

### Problem 4 – Binary Search
Tested successfully in C++20 environment.

### Problem 5 – Mark and Toys
Accepted submission screenshot: To be attached.

---

# 6. HackerRank Badge

HackerRank badge evidence, if earned, will be attached here.

The 3-Star badge is a portfolio goal and does not replace completion of the five mandatory problems.

---

# 7. Reflection

This activity improved my understanding of fundamental algorithmic techniques and their efficiency. I learned how different problems require different strategies instead of simply writing code that produces the correct output. Mini-Max Sum and Birthday Cake Candles helped me practice single-pass array traversal, where useful information such as maximum, minimum, and frequency can be maintained without sorting. Insertion Sort – Part 1 helped me understand how elements can be shifted to maintain a sorted section of an array. Binary Search demonstrated the importance of using a sorted data structure to reduce the search space by half during every iteration. Mark and Toys introduced the greedy approach, where selecting the cheapest available items first maximizes the number of purchases within a fixed budget. I also learned to analyze algorithms using Big-O notation and distinguish between time complexity and auxiliary space complexity. Maintaining separate folders and documenting each solution on GitHub also helped me understand the importance of organizing coding work for a professional portfolio. Overall, the activity strengthened my problem-solving skills and gave me more confidence in analyzing and implementing basic algorithms.

---

## 8. Repository Structure

```text
HackerRank-3rdSem-Algorithm-Portfolio/
│
├── README.md
│
├── 01-Mini-Max-Sum/
│   └── solution.cpp
│
├── 02-Birthday-Cake-Candles/
│   └── solution.cpp
│
├── 03-Insertion-Sort-Part-1/
│   └── solution.cpp
│
├── 04-Binary-Search/
│   └── solution.cpp
│
└── 05-Mark-and-Toys/
    └── solution.cpp
