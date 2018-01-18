import sys

if len(sys.argv)!=2:
    exit(1)

k=sys.argv[1]
s=input("plaintext:")
x=len(s)
print("ciphertext:",end="")
for i in range(x):
    if s[i].isupper():
        v=s[i]
        m=ord(v)+int(k)
        if m>=65 and m<=90:
            print(chr(m),end="")
        elif m>90:
            while m>90 or m<65:
                l=m-90
                e=64+l
                m=e

            print(chr(m),end="")


    elif s[i].islower():
        v=s[i]
        m=ord(v)+int(k)
        if m>=97 and m<=122:
            print(chr(m),end="")
        elif m>122:
            while m>122 or m<97:
                l=m-122
                e=96+l
                m=e

            print(chr(m),end="")
    else:
        print(s[i],end="")

print()