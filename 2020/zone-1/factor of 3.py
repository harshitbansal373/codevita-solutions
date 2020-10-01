testCases=int(input())
for testSequence in range(testCases):
    asize=int(input())
    inputList = list(map(int,input().strip().split()))

    l2=[]
    for i in inputList:
        l2.append(i%3)
        
    flag=0
    if(len(inputList)%2==0):
        if(l2.count(0)>len(inputList)//2):
            
            print('No')
            flag=1
    else:
        if(l2.count(0)>len(inputList)//2+1):
            
            print('No')
            flag=1
        



    if flag==0:
        if(l2.count(1)<=l2.count(2)):
           if l2.count(1)<=l2.count(0):
               
               print('Yes')
               flag=1;
        else:
            if l2.count(2)<=l2.count(0):
               
               print('Yes')
               flag=1;

    if flag==0:
        print('No')
