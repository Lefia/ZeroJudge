li = []
while 1:
    line = input().split()
    order = line[0]
    line.pop(0)
    if order == "SHOW":
        print(" ".join(x for x in li))
        break
    elif order == "ADD":
        li.append(line[0])
    elif order == "INSERT":
        li.insert(li.index(line[1]), line[0])
    elif order == "REMOVE":
        li.remove(line[0])