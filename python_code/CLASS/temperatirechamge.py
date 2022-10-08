class temperature():
     def __init__(self,F,C):
         self.fharenheit=F
         self.celsius=C
     def CtoF(self):
         return ((1.8)*self.celsius)+32
     def FtoC(self):
         return (self.fharenheit-32)*(5/9)

c1=temperature(108,36)
print('fahrenheit to celsius')
print(c1.FtoC())
print('celsius to fahrenheit:')
print(c1.CtoF())
