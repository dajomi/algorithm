import heapq
import sys

testcase = int(sys.stdin.readline())
lst = []
for i in range(testcase) :
    number = int(sys.stdin.readline())
    if number != 0 :
        heapq.heappush(lst, number)
    else :
        try :
        print(heapq.heappop(lst))
        except :
        print(0)
