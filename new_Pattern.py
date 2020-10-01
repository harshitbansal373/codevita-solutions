import numpy

r,c,ci,cj = map(int,input().split())

for i in range(ci,-1,-1):
    for j in range(cj,-1,-1):
        if j>=i:
            print(j,end=" ")
        else:
            print(i,end=" ")
    for j in range(1,c-cj):
        if j>=i:
            print(j,end=" ")
        else:
            print(i,end=" ")
    print()

for i in range(1,r-ci):
    for j in range(ci,-1,-1):
        if j>=i:
            print(j,end=" ")
        else:
            print(i,end=" ")
    for j in range(1,c-cj):
        if j>=i:
            print(j,end=" ")
        else:
            print(i,end=" ")
    print()
