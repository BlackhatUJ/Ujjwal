class person():
    def __init__(self,name,age,can_vote):
        self.name=name
        self.age=age
        self.can_vote=can_vote
    @staticmethod
    def isadult(age):
        if age>=18:
            return True
        else:
            return False
    @classmethod
    def create(cls,name,age):
        if cls.isadult(age)==True:
            return cls(name,age,'yes')
        else:
            return cls(name,age,'no')
st1=person.create('john',15)
st2=person.create('abhay',25)

print('can',st1.name,'vote?\n:-', st1.can_vote)
print('can',st2.name,"vote?\n:-",st2.can_vote)