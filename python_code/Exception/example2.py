def square():
    x= int(input('enter the number'))

    while True:
        try:
            print(x**2)
        except:
            print('error occuered')
        else:
            break
print(square())