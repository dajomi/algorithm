import sys
train, test = map(int,sys.stdin.readline().split())
monsters = dict()
for i in range(train):
    m = sys.stdin.readline().split()
    m = ''.join(m)
    monsters[m] = i+1
lst_monster = list(monsters.keys())
for i in range (test):
    monster = sys.stdin.readline().split()
    monster = ''.join(monster)
    if (monster.isdigit()):
        print(lst_monster[int(monster)-1])
    else:
        print(monsters[monster])
