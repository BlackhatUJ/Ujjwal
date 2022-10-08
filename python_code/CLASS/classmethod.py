class student():
    def __init__(self,name,age):
        self.name=name
        self.age=age
    @classmethod
    def create(cls,name,age):
        return cls(name,age+1)
st1= student('john',20)
st2=student.create('johny',30)
print('name is:',st1.name ,'age is',st1.age)
print('name is:',st2.name,'age is',st2.age)

