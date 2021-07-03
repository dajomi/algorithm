import sys
num = int(sys.stdin.readline())

def findprintorder(numbers, findidx, numofnumber):
    idxlst = [i for i in range(numofnumber)]
    sortednumbers = sorted(numbers, reverse = True)
    for i in range(numofnumber):
        while(numbers[i] != sortednumbers[i]):
            numbers = numbers[:i] + numbers[i+1:] + [numbers[i]]
            idxlst = idxlst[:i] + idxlst[i+1:] + [idxlst[i]]
    idx = [i for i in range(numofnumber)]
    dic = { name:value for name, value in zip(idxlst, idx) }
    print(dic[findidx]+1)

for i in range(num):
    numofnumber, findidx = map(int,sys.stdin.readline().split())
    numofnumber = int(numofnumber)
    findidx = int(findidx)
    numbers = list(map(int, sys.stdin.readline().split()))
    findprintorder(numbers, findidx, numofnumber)

