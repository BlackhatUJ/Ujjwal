num1= input("enter the number:")
try:
    num2= int(num1)
    num3= 10/num2
    #print(num4)
except ValueError:
    print('enter the numebric value')
except ZeroDivisionError:
    print('enter the non-zero value')
except:
    print('enter the correct number')
else:
    print(num3)
finally:
    print('we cleaned up the clauses')
      