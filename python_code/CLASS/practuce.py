class circle():
    def __init__(self,r):
        self.radius=r
    def getarea(self):
        return  3.14*(self.radius)*(self.radius)
    def getcircumference(self):
        return 2*3.14*(self.radius)
c1=circle(4)
print(c1.getarea())
print(c1.getcircumference())

