import math
while(1):
    try:
        n = int(input())
        if n <= 100:
            sum=0
            for i in range(1, n+1):
                sum += 1 / i
            print("%.3f"%sum)
        else:
            result = math.log(float(n)) + 0.577215664901532860606512090082402431042159335
            print("%.3f"%result)
    except:
        break;