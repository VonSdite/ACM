import re
import time

goodstr = str(input())

haha = matchStr = str(input())

strinfo = re.compile('\?')
new = '[' + goodstr + ']'
matchStr = strinfo.sub(new, matchStr)

strinfo = re.compile('\*')
new = '[^' + goodstr + ']*'
matchStr = strinfo.sub(new, matchStr)

n = int(input())
strinfo = re.compile(pattern=matchStr)

for x in range(n):
    query = str(input())
    item = strinfo.match(query)
    if item:
        if item[0] == query:
            print('YES')
        else:
            print('NO')
    else:
        print('NO')
