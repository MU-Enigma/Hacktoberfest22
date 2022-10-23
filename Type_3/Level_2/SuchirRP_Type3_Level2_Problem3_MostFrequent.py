#usr/bin/python3.10

def searchls(ls, item):
    flag = 0
    for i in ls:
        if(i == item):
            flag = 1
    return flag

def mostfreq(ls):
    dict = {}
    for i in ls:
        if(searchls(dict.keys(), item) == 0):

