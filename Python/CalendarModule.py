# Enter your code here. Read input from STDIN. Print output to STDOUT
import calendar

inp=input()
inp=inp.split()
inp[0],inp[1]=inp[1],inp[0]
if inp[0][0]=='0':
    inp[0]=' '+inp[0][1]

day=calendar.month(int(inp[2]),int(inp[1]))
# print(day.replace(' ','_'))

l=[]
c=0
for i in range(len(day)):
    if day[i]=='\n':
        l.append(day[c:i])
        c=i

x=0
j=0
for i in range(len(l)):
    if inp[0] in l[i]:
        for j in range(len(l[i])):
            if inp[0][0]==l[i][j] and inp[0][1]==l[i][j+1]:
                x=i
                y=j
                break

ob=l[1][y]+l[1][y+1]
if ob=='Su':
    print('SUNDAY')
elif ob=='Mo':
    print('MONDAY')
elif ob=='Tu':
    print('TUESDAY')
elif ob=='We':
    print('WEDNESDAY')
elif ob=='Th':
    print('THURSDAY')
elif ob=='Fr':
    print('FRIDAY')
elif ob=='Sa':
    print('SATURDAY')

