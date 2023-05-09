n = int(input())
k = list(map(int, input().split()))
p = 0
for i in range(n):
    if (i == 0):
        p += 1
    elif (k[i] >= k[i - 1]):
        p += 1
print(p)
