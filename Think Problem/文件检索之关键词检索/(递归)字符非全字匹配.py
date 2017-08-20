def search(string, txt):
    #去首尾空格
    string = string.strip()
    #主循环，找不在括号中的“&”和“|”进行判断
    layer = 0
    for i in range(len(string)):
        #判断括号层数
        if string[i] == '(': layer += 1
        if string[i] == ')': layer -= 1
        #处理“&”的情况
        if string[i] == '&' and layer == 0:
            if search(string[:i], txt):
                return search(string[i+1:], txt)
            else:
                return False
        #处理“|”的情况
        elif string[i] == '|' and layer == 0:
            if search(string[:i], txt):
                return True
            else:
                return search(string[i+1:], txt)
    #去首尾括号
    if string[0]=='(' and string[-1]==')': return search(string[1:-1], txt)
    #处理“！”的情况
    return not search(string[1:], txt) if string[0] == '!' else string in txt
        
txt = 'one apple with two leaves, one is green and the other is yellow.'
string = 'ther'

print(search(string, txt))