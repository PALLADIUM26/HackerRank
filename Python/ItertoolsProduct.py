exp1=input().split()
for i in range(len(exp1)):
    exp1[i]=int(exp1[i])
exp2=input().split()
for i in range(len(exp2)):
    exp2[i]=int(exp2[i])
l=[]
for i in exp1:
    for j in exp2:
        l.append((i,j))
l.sort()
for i in l:
    print(i,end=' ')
