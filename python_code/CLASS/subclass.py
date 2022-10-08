# //all the attributes and methods of the superclass are inherited by its subclass also.all
# this ,means object of a subclass can access all the attributes or methods of the superclass.
# ------------------------------------------------------------------

# class person():
#     def display1(self):
#         print("this is superclass")
# class student(person):
#     def display2(self):
#         print("this is subclass")
# per=student()
# per.display1()
# per.display2()

# -------------------------------------------------------------------------------

class person():
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def display(self):
        print("in superclass:name=", self.name, "age=", self.age)


class student(person):
    def display1(self):
        print("in subclass name=", self.name, "age=", self.age)

    def display2(self, height, weight):
        self.height = height
        self.weight = weight
        print('the height of the john =', height,
              'and the weight of the john =', weight)


per = student('john', 24)

per.display()
per.display1()
per.display2(150, 65)

