input()
l=list(map(int,input().split()))
l=sorted(l)
count=0
for i in l:
    if l[count]<i:
        count+=1
print(count)
'''for i in range(len(l)-1):
    if l[i]!=l[i+1]:
        arr.append(l[i])
        arr.append(l[i+1])


for i in range(len(arr)-1):
    if arr[i]<arr[i+1]:
        count+=1
print(count)'''
