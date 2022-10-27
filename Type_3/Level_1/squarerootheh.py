class Solution:
  def squarerootheh(self, x: int) -> int:
    l = 1
    r = x + 1

    while l < r:
      m = (l + r) // 2
      if m * m > x:
        r = m
      else:
        l = m + 1
	
    return l - 1
