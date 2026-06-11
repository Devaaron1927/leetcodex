class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        key="";i=0;prefixequal=True;word=strs[0]
        for words in strs[0]:
            for checks in strs:
                if word[0:i+1] != checks[0:i+1]:
                   prefixequal=False; break
            if prefixequal==False :
                key+=word[0:i];return key           
            i=i+1    
            
        else:
            key+=word[0:i]

        return key