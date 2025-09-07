class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """

        map_sorts = {}
        res = []
        for i in range(len(strs)):
            sorted_string = "".join(sorted(strs[i]))
            if sorted_string not in map_sorts:
                map_sorts[sorted_string] = [i]
            else:
                map_sorts[sorted_string].append(i)
        
        for j in map_sorts:
            sub = []
            for k in map_sorts[j]:
                sub.append(strs[k])
            res.append(sub)
        
        return res