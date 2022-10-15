# Problem 1: Merge k sorted lists

You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it.

 
```
Example 1:

Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted list:
1->1->2->3->4->4->5->6
```
```
Example 2:

Input: lists = []
Output: []

Example 3:

Input: lists = [[]]
Output: []
```
 
Constraints:

- `k == lists.length`
- `0 <= k <= 104`
- `0 <= lists[i].length <= 500`
- `-104 <= lists[i][j] <= 104`
- lists[i] is sorted in ascending order. The sum of lists[i].length will not exceed 104.
<br>

# Problem 2: Count of Smaller Numbers After Self
Given an integer array nums, return an integer array counts where `counts[i]` is the number of smaller elements to the right of `nums[i]`.

```
Example 1:

Input: nums = [5,2,6,1]
Output: [2,1,1,0]
Explanation:
To the right of 5 there are 2 smaller elements (2 and 1).
To the right of 2 there is only 1 smaller element (1).
To the right of 6 there is 1 smaller element (1).
To the right of 1 there is 0 smaller element.
```
```
Example 2:

Input: nums = [-1]
Output: [0]
```
```
Example 3:

Input: nums = [-1,-1]
Output: [0,0]
```
 
Constraints:

- `1 <= nums.length <= 105`
- `-104 <= nums[i] <= 104`
<br>

# Problem 3: 

A transformation sequence from word `beginWord` to word endWord using a dictionary wordList is a sequence of words `beginWord` -> s1 -> s2 -> ... -> sk such that:

- Every adjacent pair of words differs by a single letter.
- Every `si` for `1 <= i <= k` is in `wordList`. Note that ``beginWord`` does not need to be in `wordList`.
- `sk == endWord`

Given two words, `beginWord` and endWord, and a dictionary wordList, return the number of words in the shortest transformation sequence from `beginWord` to endWord, or 0 if no such sequence exists.

```
Example 1:

Input: `beginWord` = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log","cog"]
Output: 5
Explanation: One shortest transformation sequence is "hit" -> "hot" -> "dot" -> "dog" -> cog", which is 5 words long.
```
```
Example 2:

Input: `beginWord` = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log"]
Output: 0
Explanation: The endWord "cog" is not in wordList, therefore there is no valid transformation sequence.
```

Constraints:

- `1 <= beginWord.length <= 10`
- `endWord.length == beginWord.length`
- `1 <= wordList.length <= 5000`
- `wordList[i].length == beginWord.length`
- `beginWord, endWord, and wordList[i]` consist of lowercase English letters.
- `beginWord != endWord`
- All the words in wordList are unique.

