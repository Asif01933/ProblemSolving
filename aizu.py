'''a = list(map(int,input().split()))
l = [str(x) for x in a]
print(' '.join(sorted(l)))'''
arr = list(map(int,input().split()))
for i in range(0,len(arr)):
    for j in range(i+1,len(arr)):
        if arr[i]>arr[j]:
            temp=arr[i]
            arr[i]=arr[j]
            arr[j]=temp
for i in range(0,len(arr)):
    print(arr[i],end=" ")
