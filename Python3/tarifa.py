x = int(input())
p = int(input())
mbLeft = 0
for _ in range(p):
  mbLeft+= x-int(input())
print(mbLeft+x)
