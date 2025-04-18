if __name__ == '__main__':
    l=[]
    exprn=[]
    N = int(input())

    for i in range(N):
        inp=input()
        exprn.append(inp)

    for exp in exprn:
        if 'append' in exp:
            n=exp.split()[1]
            l.append(int(n))
        elif 'remove' in exp:
            l.remove(int(exp.split()[1]))
        elif 'print' in exp:
            print(l)
        elif 'insert' in exp:
            l.insert(int(exp.split()[1]),int(exp.split()[2]))
        elif 'sort' in exp:
            l.sort()
        elif 'pop' in exp:
            if len(l):
                l.pop()
        elif 'reverse' in exp:
            l.reverse()
