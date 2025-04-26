set_=input()
ls=set_.split()

setN=input()
lN=setN.split()

setM1=input()
lM1=setM1.split()[:int(ls[0])]

setM2=input()
lM2=setM2.split()[:int(ls[1])]

dm1={}
dm2={}

for i in lM1:
    if i not in dm1:
        dm1[i]=0

for i in lM2:
    if i not in dm2:
        dm2[i]=0

c=0
for i in lN:
    if i in dm1:
        c+=1
    elif i in dm2:
        c-=1
        
print(c)
