class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dict = {}

        for s in strs:
            key = [0] * 26
            for c in s:
                key[ ord(c)  - ord('a')]  = key[ ord(c)  - ord('a')] + 1
            if tuple(key) not in dict :
                dict[tuple(key)] = [s]
            else:
                dict[tuple(key)].append(s)


        return list(dict.values())