import re

length = int(input())
s1 = str(input())

p1 = re.compile(r'a+')
p2 = re.compile(r'i+')
p3 = re.compile(r'u+')
p4 = re.compile(r'o{3,}')
p5 = re.compile(r'e{3,}')
p6 = re.compile(r'y+')

s1 = p1.sub('a', s1)
s1 = p2.sub('i', s1)
s1 = p3.sub('u', s1)
s1 = p4.sub('o', s1)
s1 = p5.sub('e', s1)
s1 = p6.sub('y', s1)
print(s1)
