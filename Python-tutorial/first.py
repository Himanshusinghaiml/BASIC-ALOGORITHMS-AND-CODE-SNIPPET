#check valid paranthesis 
# S = "()"
# S = "()[]{}"
# S = "(]"
# S = “{“
# S = “{[{()}]}”
#this questuon is being asked by devKraft technologies
def paranthesis(s):
    stack=[]
    mapping={')':'(','}':'{',']':'['}
    for char in s:
        if char in mapping.values():
            stack.append(char)
        elif char in mapping:
            if not stack or stack.pop()!=mapping[char]:
                return False
    return len(stack)==0

s="{[{()}]}"
# s= "})"
# s = "{[{(})]}"
if paranthesis(s):
    print("yes valid")
else:
    print("not valid")
    
