x=5
y=0
try:
    z=x/y
except ZeroDivisionError():
    print('error occured')
finally:
    print('this cannot be devided')