class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if (len(s) != len(t)):
            return False
        binary_flags = []
        for i in range(0,127):
            binary_flags.append(0)
        for i in s:
            binary_flags[ord(i)] += 1
        for i in t:
            binary_flags[ord(i)] -= 1
        
        for i in binary_flags:
            if (i > 0 or i < 0):
                return False
        return True
