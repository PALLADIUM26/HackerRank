n=input()
n=int(n.split()[0])
n2=int(n/2)
c1=(n*3-3)//2
c2=1
c4=0
for i in range(n2):
    print('-'*c1,end='')
    print('.|.'*(c2+i),end='')
    c4=c2+i
    print('-'*c1)
    c1-=3
    c2+=1
x='-'*((n*3-7)//2)+'WELCOME'+'-'*((n*3-7)//2)
print(x)
c3=3
for i in range(n2):
    print('-'*c3,end='')
    print('.|.'*(c4),end='')
    print('-'*c3)
    c3+=3
    c4-=2
