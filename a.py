#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Apr  4 04:36:19 2020

@author: karan
"""
t = int(input())
for j in range(t):
    n = int(input())
    lst = []
    for i in range(n):
        l = list(map(int,input().split()))
        lst.append(l)
    k=0
    for i in range(n):
        #print(lst[i][i])
        k = k + lst[i][i]
    r=0
    for i in range(n):
        s = set(lst[i])
        if len(s) != n:
            r = r+1
    c=0
    for i in range(n):
        s = set()
        for x in range(n):
            s.add(lst[x][i])
        if(len(s)!=n):
            c = c + 1
    print("Case #{}:".format(j+1),k,r,c)