roll= int(input('enter the roll number:  '))
try:
    if roll<=0:
        raise ValueError()
except ValueError:
    print('enter the correct roll number')


'''try:
    for i in  ['a','b','c']:
        print(i**2)
except :
    print('error')   '''     