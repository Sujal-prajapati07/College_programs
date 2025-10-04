class Phone:
    def use(self):
        print("Making a call...")

class Camera:
    def use(self):
        print("Taking a photo...")

class SmartDevice(Phone, Camera):
    def use(self):
        print("---------------------------------------------")
        print("SmartDevice can call and take photos!")

sd = SmartDevice()
sd.use()  # Calls SmartDevice's use

print("----MRO ORDER----")
for cls in SmartDevice.mro():
    print(cls.__name__)

## mro() is a built-in method in Python...Method Resolution Order (MRO)
## It returns a list of classes that Python will search, in order, when looking for a method or attribute