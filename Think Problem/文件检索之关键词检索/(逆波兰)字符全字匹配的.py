import re


def search(string, txt):

    pattern = re.compile(r'[^!&|() .,!]+')
    def changeKeywords(string, txt):
        '''
        将关键字转换为0或1
        例如
        txt = 'one apple with two leaves, one is green and the other is yellow.'
        s1 = '(apple | others) & two'
        转换后 string ='(1 | 0) & 1'
        '''
        string = ' ' + string + ' '
        keywords = pattern.findall(string)
        for each in keywords:
            p = re.compile('[!&|() .,!]%s[!&|() .,!]' % each)
            if p.findall(txt):
                string = re.sub('([!&|() ])(%s)([!&|() ])' % each, '\g<1>1\g<3>', string)
            else:
                string = re.sub('([!&|() ])(%s)([!&|() ])' % each, '\g<1>0\g<3>', string)
        string = string.replace(' ', '')
        return string

    operatorPrecedence = {
        '(': 0,
        ')': 0,
        '|': 1,
        '&': 2,
        '!': 3
    }

    def postfixConvert(exp):
        ''''' 
        将表达式字符串，转为后缀表达式 
        如exp = "1+2*(3-1)-4" 
        转换为：postfix = ['1', '2', '3', '1', '-', '*', '+', '4', '-'] 
        '''
        stack = []  # 运算符栈，存放运算符
        postfix = []  # 后缀表达式栈
        for char in exp:
            #        print char, stack, postfix
            if char not in operatorPrecedence:  # 非符号，直接进栈
                postfix.append(char)
            else:
                if len(stack) == 0:  # 若是运算符栈啥也没有，直接将运算符进栈
                    stack.append(char)
                else:
                    if char == "(":
                        stack.append(char)
                    elif char == ")":  # 遇到了右括号，运算符出栈到postfix中，并且将左括号出栈
                        while stack[-1] != "(":
                            postfix.append(stack.pop())
                        stack.pop()

                    elif operatorPrecedence[char] > operatorPrecedence[stack[-1]]:
                        # 只要优先级数字大，那么就继续追加
                        stack.append(char)
                    else:
                        while len(stack) != 0:
                            if stack[-1] == "(":  # 运算符栈一直出栈，直到遇到了左括号或者长度为0
                                break
                            # 将运算符栈的运算符，依次出栈放到表达式栈里面
                            postfix.append(stack.pop())
                        stack.append(char)  # 并且将当前符号追放到符号栈里面

        while len(stack) != 0:  # 如果符号站里面还有元素，就直接将其出栈到表达式栈里面
            postfix.append(stack.pop())
        return postfix

    def calculate(num1, op, num2='0'):
        if not num1.isdigit() and not num2.isdigit():
            raise "num error"
        else:
            num1 = int(num1)
            num2 = int(num2)
        if op == "&":
            return int(num1 and num2)
        elif op == "|":
            return int(num1 or num2)
        elif op == "!":
            return int(not num1)
        else:
            raise "op error"

    def calExpressionTree(postfix):
        stack = []
        for char in postfix:
            stack.append(char)
            if char in "&|":
                op = stack.pop()
                num2 = stack.pop()
                num1 = stack.pop()
                value = calculate(num1, op, num2)
                value = str(value)  # 计算结果是数值类型，将其化为字符串类型
                stack.append(value)
            elif char == '!':
                op = stack.pop()
                num1 = stack.pop()
                value = calculate(num1, op)
                value = str(value)
                stack.append(value)
        return bool(int(stack[0]))

    string = changeKeywords(string, txt)
    postfix = postfixConvert(string)
    res = calExpressionTree(postfix)
    return res


if __name__ == '__main__':
    txt = 'one apple with two leaves, one is green and the other is yellow.'

    s1 = '(apple | others) & two'                               # True
    s2 = 'one & yellow & leaf'                                  # False
    s3 = '(!three | one & four) & !five'                        # True
    s4 = '!green & (ones | two)'                                # False
    s5 = '(big | !apple | the) & ((!yellow | !green) | others)' # False

    s6 = '!(apple & other) | !apple & !(yellow | green)'
    s7 = 'other'

    print(search(s1, txt))
    print(search(s2, txt))
    print(search(s3, txt))
    print(search(s4, txt))
    print(search(s5, txt))
    print(search(s6, txt))
    print(search(s7, txt))
