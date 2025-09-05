class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        map_string = {}
        if len(s) != len(t): return False
        for i in range(len(s)):
            if s[i] in map_string:
                map_string[s[i]] = map_string[s[i]] + 1
            else:
                map_string[s[i]] = 1

        for j in range(len(t)):
            if t[j] in map_string and map_string[t[j]] > 0:
                map_string[t[j]] = map_string[t[j]] - 1
            else:
                return False
        
        print len(map_string)
        return True
        