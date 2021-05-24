test = int(input())
modd = 1000000007

while(test):
    ask = int(input())
    ans = ask * (ask + 1) * (ask + 2) // 6
    print(ans % modd)
    test -= 1
