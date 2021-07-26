n=int(input())
temp=0
arr=[]
l=list(map(int,input().split()))
s=sorted(l)
print(n)
for i in range(len(l)):
    for j in range(i,len(l)):
        if l[j]==s[i]:
            temp=l[i]
            l[i]=l[j]
            l[j]=temp
            arr.append(str(i)+" "+str(j))
            break
print("\n".join(arr))
