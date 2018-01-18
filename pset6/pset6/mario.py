while True:
    n=int(input())
    if n>=0 and n<24:
        break;

for i in range(n):
    for k in range(n-1-i):
        print(" ",end="")
    for l in range(i+1):
        print("#",end="")
    print("  ",end="")
    for m in range(i+1):
        print("#",end="")
    print()
