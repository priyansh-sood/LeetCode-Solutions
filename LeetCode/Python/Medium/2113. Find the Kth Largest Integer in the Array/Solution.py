class Solution:
    def kthLargestNumber(self, nums: list[str], k: int) -> str:
        integers = []

        for s in nums:
            integers.append(int(s))

        integers.sort()

        n = len(integers)
        return str(integers[n - k])