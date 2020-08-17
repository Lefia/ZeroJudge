r, a = input().split(" ")
a = int(a)
r = int(r)
if r == a:
    print("{}+{}={}".format(min(3,a-3), max(3, a-3), r))
else:
    print("{}+{}={}".format(min(r-a, a), max(r-a, a), r))