if __name__ == '__main__':
    python_students=[]
    d={}
    l=[]
    for i in range(int(input())):
        name = input()
        score = float(input())
        python_students.append([name,score])
        if score not in d:
            d[score]=1
        else:
            d[score]+=1
    for i in d:
        l.append(i)

    l.sort()
    x=l[1]
    l2=[]
    for i in python_students:
        if i[1]==x:
            l2.append(i[0])

    l2.sort()
    for i in l2:
        print(i)
        
