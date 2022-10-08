class square():
    side=14 #attribute

sq1=square()  #object declaration
sq2=square()
sq1.side= 20   
sq2.side=2
print(sq1.side) #accessing class attribute
print(sq2.side)

class rectangle():
    length=20
print("length is =", rectangle.length)  #attribute can be access by class when object is not available
breadth= rectangle()

print('breadth is =',rectangle.breadth)