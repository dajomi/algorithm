numstr = input()
continuedNum = ''
for i in range(int(numstr)) :
    continuedNum += str(i + 1)
    length = len(numstr)
    for i in range(len(continuedNum)) :
        if continuedNum[i:i + length] == numstr :
            print(i + 1)
            break