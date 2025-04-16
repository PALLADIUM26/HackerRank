

# Complete the solve function below.
def solve(s):
    s=' '+s
    s1=''
    for i in range(1,len(s)):
        if s[i].islower() and s[i-1]==' ':
            s1+=s[i].upper()
        else:
            s1+=s[i]
    return s1
