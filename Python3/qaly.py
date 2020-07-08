def prod(l):
  return l[0]*l[1]
tc = int(input())
print(sum([prod(list(map(float, input().split()))) for _ in range(tc)]))
