n=list(map(int,input().rstrip()))
sum=-1
for i in range(len(n)):
    if n[i]%2!=0:
        continue
    sum=i
    if n[len(n)-1]>n[i]:
            break
if sum!=-1:
    n[sum],n[len(n)-1]=n[len(n)-1],n[sum]
    print(*n,sep="")
else:
    print("-1")
