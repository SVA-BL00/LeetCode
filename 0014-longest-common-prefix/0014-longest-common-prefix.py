class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        output = strs[0]
        
        for i in range(len(strs)):
            while not strs[i].startswith(output):
                output = output[:-1]
                if not output:
                    return ""
        return output