import math
table = [0] * 1001
for i in range(1, 1001):
    if math.sqrt(i).is_integer():
        table[i] = 1
t = int(input())
for i in range(t):
    a = int(input())
    b = int(input())
    sum=0
    for j in range(a, b+1):
        if table[j] == 1:
            sum += j
    print("Case {}: {}".format(i+1, sum))
