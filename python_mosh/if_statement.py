#if statement
is_hot = True
is_cold = False

if(is_hot):
    print("weather is hot")
elif(is_cold):
    print("weather is cold")
else:
    print("weather is fine")
print("control statement ended")


if False :
    pass
elif False:
    pass 
else:
    print("else")

price = 10000
has_good_credit = True

if has_good_credit:
    down_payment = 0.1 * price
else:
    down_payment = 0.2 * price
print(f"Down payment: {down_payment}")
