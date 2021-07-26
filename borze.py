'''s=input()
for i in range(len(s)):
    if s[i]=="-" and s[i+1]==".":
        s.replace("-.","1")
    elif s[i]=="-" and s[i+1]=="-":
        s.replace("--","2")
    else:
        s.replace(".","0")'''


s=input()
s=s.replace("--","2")
s=s.replace("-.","1")

s=s.replace(".","0")
print(s)
s="aabb"

