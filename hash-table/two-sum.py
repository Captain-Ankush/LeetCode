class Solution:
    def twoSum(self, n, t):
        d = {}
        for i , n in enumerate(n):
            need = t - n
            if need in d:
                return [d[need], i]
            d[n] = i
        
                