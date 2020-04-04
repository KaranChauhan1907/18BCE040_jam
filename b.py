#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Apr  4 05:19:35 2020

@author: karan
"""

t = int(input())
for j in range(t):
    s = list(input())
    lst = list(s)
    a =[0]*len(s)
    ans=""
    for i in range(len(s)):
        a[i] = ord(s[i])-ord("0")
    temp =0
    for i in range(len(s)):
        d = abs(a[i]-temp)
        if(a[i]>temp):
            while(d):
                ans = ans + "(" 
                d = d-1
        if(a[i]<temp):
            while(d):
                ans = ans + ")"
                d = d-1
        temp = a[i]
        ans = ans + str(temp)
    while(temp):
        ans = ans + ")"
        temp = temp-1
    print("Case #{}:".format(j+1),ans)