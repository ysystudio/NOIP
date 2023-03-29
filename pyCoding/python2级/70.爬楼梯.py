#
# @lc app=leetcode.cn id=70 lang=python3
#
# [70] 爬楼梯
#

# @lc code=start
class Solution:
    def climbStairs(self, n: int) -> int:
        if n <= 2:
            return n
        n1 = 1
        n2 = 2
        for i in range(3, n+1):
            temp = n1+n2
            n1, n2 = n2, temp
        return temp

        # @cache
        # def climbStairs(self, n: int) -> int:
        #     if n <= 2:
        #         return n
        #     else:
        #         return self.climbStairs(n-1) + self.climbStairs(n-2)


s = Solution()
s.climbStairs(6)
# @lc code=end
