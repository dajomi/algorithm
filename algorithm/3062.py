iter = int(input())
for i in range(iter):
    num = input()
    slicedString=num[::-1]
    hap = str(int(num) + int(slicedString))
    begin = 0
    end = len(hap) - 1
    result = True
    while begin < end:
        if hap[begin] != hap[end]: result = False
        begin+=1
        end-=1
    if (result == True):print("YES")
    else: print("NO")
