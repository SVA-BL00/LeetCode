class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        arr.sort()
        min_dif = float('inf')
        pairs = {}
        for i in range(len(arr) - 1):
            local_dif = abs(arr[i] - arr[i+1])
            min_dif = min(min_dif, local_dif)
            if local_dif in pairs:
                pairs[local_dif].append(i)
            else:
                pairs[local_dif] = [i]
        res_arr = []
        for j in range(len(pairs[min_dif])):
            index = pairs[min_dif][j]
            res_arr.append([arr[index], arr[index+1]])
        
        return res_arr