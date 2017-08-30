ipu = input()
k = int(input())

ipuLen = len(ipu)
diffLen = len(set(ipu))

if diffLen >= k:
    print(0)
else:
    if k > ipuLen:
        print('impossible')
    else:
        print(k - diffLen)
