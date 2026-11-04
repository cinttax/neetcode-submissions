class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = {}

        for num in nums:
            if num not in freq:
                freq[num] = 1
            freq[num] = freq[num] + 1


        return sorted(freq.keys(), key= lambda x : freq[x], reverse= True)[:k]