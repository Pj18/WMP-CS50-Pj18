count=0
while True:
    amount=float(input())
    if amount>=0.0:
        break;

while amount>=0.009:
    if amount>=0.25:
        count+=1
        amount=amount-0.25
    elif amount>=0.09:
        count+=1
        amount=amount-0.10
    elif amount>=0.049:
        count+=1
        amount=amount-0.05
    elif amount>0.009:
        count+=1
        amount=amount-0.01

print(count)