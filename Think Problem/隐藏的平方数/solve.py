from math import sqrt

MAX = int(sqrt(1929394959697989990))  # 最大可能值
MIN = int(sqrt(1020304050607080900))  # 最小可能值

# 最大可能值和最小可能值比较， 从最大可能值开始会快很多！ 因为结果接近
for num in range(MAX, MIN-1, -1):
    tmp = str(num*num)

    # 判断是否是1_2_3_4_5_6_7_8_9_0
    cnt = 2
    for each in tmp[2::2]:
        if each != str(cnt):
            break
        cnt = (cnt+1) % 10

    # 是的话就是结果了 
    if cnt == 1:
        print(num, tmp)
        break

