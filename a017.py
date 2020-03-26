try:
    while True:
        s=input()
        s=s.replace('/',"//")
        print(int(eval(s)))
except EOFError:
    pass