class Device:
    def __init__(self, name):
        self.name = name
        self.status = False

    def turn_on(self):
        self.status = True
        print(f"{self.name} is ON")

    def turn_off(self):
        self.status = False
        print(f"{self.name} is OFF")

class Light(Device):
    pass

class Fan(Device):
    pass

class Thermostat(Device):
    def __init__(self, name):
        super().__init__(name)
        self.temperature = 25

    def set_temperature(self, temp):
        if temp < 0:
            raise Exception("Temperature cannot be negative.")
        self.temperature = temp
        print(f"{self.name} temperature set to {self.temperature}°C")

light = Light("Living Room Light")
fan = Fan("Bedroom Fan")
thermo = Thermostat("Hall Thermostat")

light.turn_on()
fan.turn_on()
thermo.turn_on()

try:
    print("---------------------------------------------------")
    temp = int(input("Set temperature for thermostat: "))
    thermo.set_temperature(temp)
except Exception as e:
    print("Error:", e)
