# collections.Counter()

# Enter your code here. Read input from STDIN. Print output to STDOUT
x=int(input())
d={}
y=input().split()
for i in y:
    if i in d:
        d[i]+=1
    else:
        d[i]=1
n=int(input())
s=0
for i in range(n):
    inp=input().split()
    ni=inp[0]
    xi=int(inp[1])
    if ni in d and d[ni]>0:
        d[ni]-=1
        s+=xi
print(s)
