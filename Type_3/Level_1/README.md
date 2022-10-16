# Problem 1: Pascal's triangle

Given an integer numRows, return the first `numRows` of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

![assets/PascalTriangle.gif](https://github.com/0xd1r/Hacktoberfest22/blob/bd49abfbaca181d92601aa9e6ea6fa2440a8d761/assets/PascalTriangle.gif)

Example 1:

```
Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
```

Example 2:

```
Input: numRows = 1
Output: [[1]]
```

Constraints:

- `1 <= numRows <= 30`
<br>
<br>


# Problem 2: Happy number

Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

- Starting with any positive integer, replace the number by the sum of the squares of its digits.
- Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
- Those numbers for which this process ends in 1 are happy.
- Return true if n is a happy number, and false if not. 

```
Example 1:

Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1
```

```
Example 2:

Input: n = 2
Output: false
```
 

Constraints:

- `1 <= n <= 231 - 1`

<br>

# Problem 3: Single number

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

```
Example 1:

Input: nums = [2,2,1]
Output: 1
```
```
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
```
```
Example 3:

Input: nums = [1]
Output: 1
```
 
Constraints:

- `1 <= nums.length <= 3 * 104`
- `-3 * 104 <= nums[i] <= 3 * 104`
- Each element in the array appears twice except for one element which appears only once.
<br>

# Problem 4: Sqrt(x)

Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

**Note:** You are not allowed to use any built-in exponent function or operator, such as `pow(x, 0.5)` or `x ** 0.5`.

```
Example 1:

Input: x = 4
Output: 2
```
```
Example 2:

Input: x = 8git
Output: 2
Explanation: The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned.
```
 

Constraints:

- `0 <= x <= 231 - 1`
<br>

# Problem 5: Reverse string

Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 
```
Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
```

```
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
```
 

Constraints:

- `1 <= s.length <= 105`
- s[i] is a [printable ascii character](https://en.wikipedia.org/wiki/ASCII#Printable_characters).
