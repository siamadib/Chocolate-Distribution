# 🍫 Chocolate Distribution Problem

A simple C++ solution to the **Chocolate Distribution Problem** using a greedy approach and sorting.

## 📌 Problem Statement

Given an array representing the number of chocolates in each packet and an integer `m` representing the number of students, distribute one packet to each student such that the **difference between the maximum and minimum chocolates received is minimized**.

If the number of students is greater than the number of packets, the program prints **"NOT POSSIBLE"**.

## 🚀 Algorithm

1. Read the number of packets (`n`) and students (`m`).
2. Store the chocolate counts in a vector.
3. Sort the vector in ascending order.
4. Check every possible group of `m` consecutive packets.
5. Calculate the difference between the largest and smallest packet in each group.
6. Return the minimum difference found.

## 💻 Technologies Used

- C++
- STL (`vector`, `algorithm`)

## 📥 Input Format

```
n m
a1 a2 a3 ... an
```

### Example Input

```
7 3
7 3 2 4 9 12 56
```

## 📤 Output

```
2
```

## ⏱️ Time Complexity

- Sorting: **O(n log n)**
- Traversing the array: **O(n)**
- **Overall:** `O(n log n)`

## 💾 Space Complexity

- **O(1)** (excluding the input vector)

## 📚 Concepts Used

- Greedy Algorithm
- Sorting
- Sliding Window
- STL Vector
- Functions
