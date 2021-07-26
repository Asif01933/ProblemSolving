import math
r,x,y,x1,y1=map(int,input().split())
print(math.ceil(((x-x1)**2+(y-y1)**2)**0.5/(2*r)))