

class person():
    def __init__(self,pername,perage):
        self.name=pername
        self.age=perage
class student(person):
    def __init__(self,stuname,stuage,stufee):
        self.fee=stufee
        person.__init__(self,stuname,stuage)
s1=student('ujjwal',18,'2lakh/sem')
print("name=",s1.name,'age:',s1.age,'fee:',s1.fee)
