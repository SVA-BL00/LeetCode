class Solution:
    def isCircularSentence(self, sentence: str) -> bool:
        sentence_list = sentence.split(" ")
        if len(sentence_list) == 1:
            if sentence_list[0][-1] == sentence_list[0][0]:
                return True
            return False
        
        for i in range(len(sentence_list) -1):
            if not sentence_list[i + 1].startswith(sentence_list[i][-1]):
                return False
            continue
            
        if sentence_list[0][0] != sentence_list[len(sentence_list)-1][-1]:
            return False
        
        return True