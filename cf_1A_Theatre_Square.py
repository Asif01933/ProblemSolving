import  math
n,m,a = map(int,input().split())
tot = math.ceil(n/a)* math.ceil(m/a)
print("%i" %tot)