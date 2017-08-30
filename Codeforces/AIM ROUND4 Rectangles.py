tmp = input().split(' ')
n = int(tmp[0])
m = int(tmp[1])

table = []
for i in range(n):
    color = input().split(' ')
    tmp = []
    for j in range(m):
        tmp.append(int(color[j]))
    table.append(tmp)

ans = 0
for i in range(n):
    flag1 = 0
    flag0 = 0
    for j in range(m):
        if table[i][j]:
            flag1 += 1
        else:
            flag0 += 1
    ans += 2**flag1 + 2**flag0 - 2

for i in range(m):
    flag1 = 0
    flag0 = 0
    for j in range(n):
        if table[j][i]:
            flag1 += 1
        else:
            flag0 += 1
    ans += 2**flag1 + 2**flag0 - 2

ans -= n * m
print(ans)
