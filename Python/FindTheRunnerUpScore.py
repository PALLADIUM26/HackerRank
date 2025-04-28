if __name__ == '__main__':
    n=int(input())
    inp=input()
    arr = inp.split()[:n]
    for i in range(n):
        arr[i]=int(arr[i])
    d={}
    for i in arr:
        if i not in d:
            d[i]=0
    arr2=[]
    for i in d:
        arr2.append(i)
    arr2.sort()
    print(arr2[len(arr2)-2])
