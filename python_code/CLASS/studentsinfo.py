class student():
    def __init__(self,name,roll):
        self.name= name
        self.roll=roll
        
    def display(self):
        print (self.name)
        print(self.roll)
    def setage(self,age):
         self.age=age
         return age
        
    def setmarks(self,marks):
        self.marks=marks
        return marks
    
        
info=student('ujjwal','R21442021')
print(info.display())
print(info.setage(18))
print(info.setmarks(99))



        