class time():
    def __init__(self,hours,minutes):
        self.hours=hours
        self.minutes=minutes
    def addtime(t1,t2):
        t3= time(0,0)
        if t1.minutes+t2.minutes > 60:
            t3.hours= (t1.minutes+t2.minutes)/60
        t3.hours= t3.hours+t1.hours+t2.hours
        t3.minutes=(t1.minutes+t2.minutes)-(((t1.minutes+t2.minutes)/60)*60)
        return t3
    def display_time(self):
        print('time is',self.hours,'hours and',self.minutes,'minutes.')

    def display_minutes(self):
        print((self.hours*60)+self.minutes)

a=time(2,50)
b=time(1,20)
c=time.addtime(a,b)
c.display_time()
c.display_minutes()


        