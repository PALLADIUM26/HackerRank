#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    s = input()
    d={}
    l=[]

    for i in range(len(s)):
        if s[i] in d:
            d[s[i]]+=1
        else:
            d[s[i]]=1
    #print(d)

    for i in d:
        l.append([i,d[i]])
    #print(l)

    for i in range(len(l)):
        small=l[i][0]
        p=i
        for j in range(i+1,len(l)):
            if small>l[j][0]:
                small=l[j][0]
                p=j
        l[p],l[i]=l[i],l[p]
    
    for i in range(len(l)):
        large=l[i][1]
        p=i
        for j in range(i+1,len(l)):
            if large<l[j][1]:
                large=l[j][1]
                p=j
        l[p],l[i]=l[i],l[p]

    #print(l)

    for i in range(3):
        print(l[i][0],l[i][1])

