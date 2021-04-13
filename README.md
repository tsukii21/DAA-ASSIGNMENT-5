# Assignment-5

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019195  |   DEEPTARSHI BISWAS | deepuno0201 |
|    IIT2019197  |   Jaidev Das | tsukii21  | 

**Group No-4**

**Faculty Name-** Rahul Kala

**Mentor Name-** Md. Meraz

---
## Problem Statement
Given an array arr[] of n numbers and a number K, find the number of subsets of arr[] having XOR of elements as K.

---
## How to use code
After cloning, go to ass5 folder and compile and then run the cpp file.
```
#Download project
git clone https://github.com/tsukii21/DAA-ASSIGNMENT-5.git
```
---

**Test case**

Find max
```
Test Case-1
Input:
8 23
2 4 8 0 2 1 66 78
Out:
12
#--------------------------#
Test Case-2
Input:
6 7
2 4 8 0 2 1
Out:
4
#--------------------------#
6 0
0 0 0 0 0 0
Out:
8
```
---

### Theory
Here we are using the principle of inclusion and exclusion to to generate the number of subsets  with xor k. We can derieve a linear recurrence as
f(n,k)=f(n-1,k^a[n])(inclusion)+f(n-1,k)(exclusion).
Thus our dp relation is dp[i][j]=dp[i-1][j^a[i]]+dp[i-1][j].
---

---

### Analysis

**Time Complexity**

Here, we are going through a matrix of order n times r, where
	n = number of elements in array
r = OR of all elements in array 

Hence time complexity comes out to be O(nr)

**Space Complexity**
And for space complexity, since we are making a matrix of order n times r,
Space complexity is O(nr)


---

### References

- https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp
- https://www.geeksforgeeks.org/dynamic-programming/
- https://www.geeksforgeeks.org/understanding-time-complexity-simple-examples/
