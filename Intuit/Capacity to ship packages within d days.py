class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        
        def helper(weights, days, m):
            noDays = 1
            good_shipped = 0
            for i in range(len(weights)):
                if (weights[i] + good_shipped) <= m:
                    good_shipped += weights[i]
                else:
                    noDays += 1
                    if noDays > days or weights[i] > m:
                        return False
                    good_shipped = weights[i]
            return True
        
        s = 0
        e = sum(weights)
        res = -1
        m = s+(e-s)//2
        while s<=e:
            if helper(weights, days, m):
                res = m
                e = m-1
            else:
                s = m+1
            
            m = s + (e-s)//2
        return res