num1= input("enter the number:")
try:
    num2= int(num1)
    print(num2)
except Exception as v:
    print('exception:', v)
    #print('enter the correct input')
    