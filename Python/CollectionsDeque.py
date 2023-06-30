# Enter your code here. Read input from STDIN. Print output to STDOUT
l=[]
l2=[]
n=int(input())
for i in range(n):
    exp=input()
    if len(exp.split())==2:
        l.append([exp.split()[0],int(exp.split()[1])])
    else:
        l.append(exp)
    
for i in l:
    if 'append' in i:
        l2.append(i[1])
    elif 'appendleft' in i:
        l2.insert(0,i[1])
    elif 'popleft' in i:
        l2.pop(0)
    elif 'pop' in i:
        l2.pop()

for i in l2:
    print(i,end=' ')

