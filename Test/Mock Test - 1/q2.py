# First Unique Character in a String

# Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

# Example 1:
# Input: s = "leetcode"
# Output: 0

# Example 2:
# Input: s = "loveleetcode"
# Output: 2

# Example 3:
# Input: s = "aabb"
# Output: -1

# Constraints:
# a. 1 <= s.length <= 10^5
# b. s consists of only lowercase English letters.

import collections


def firstUniqueChar(s):
    counts = collections.Counter(s)

    for i in s:
        if counts[i] == 1:
            return s.index(i)
    return -1


s = 'loveleetcode'
ans = firstUniqueChar(s)

print(ans)
