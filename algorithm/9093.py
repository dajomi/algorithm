testcase = int(input())
for i in range(testcase):
    wordlst = ''
    wordlst += input()
    wordlst = wordlst[::-1]
    wordlst = list(wordlst.split())
    for i in range(len(wordlst), 0, -1):
        print(wordlst[i-1], end = ' ')