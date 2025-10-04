class Vehicle:
    def __init__(self, fuel_price):
        self.fuel_price = fuel_price

    def calculate_trip_cost(self, distance):
        pass

class Car(Vehicle):
    def __init__(self, fuel_price):
        super().__init__(fuel_price)
        self.efficiency = 15 

    def calculate_trip_cost(self, distance):
        cost = (distance / self.efficiency) * self.fuel_price
        print(f"Car trip cost for {distance} km: ${cost:.2f}")


class Bike(Vehicle):
    def __init__(self, fuel_price):
        super().__init__(fuel_price)
        self.efficiency = 35  # km per liter

    def calculate_trip_cost(self, distance):
        cost = (distance / self.efficiency) * self.fuel_price
        print(f"Bike trip cost for {distance} km: ${cost:.2f}")


class Truck(Vehicle):
    def __init__(self, fuel_price):
        super().__init__(fuel_price)
        self.efficiency = 8

    def calculate_trip_cost(self, distance):
        cost = (distance / self.efficiency) * self.fuel_price
        print(f"Truck trip cost for {distance} km: ${cost:.2f}")

distance = 160 
fuel_price = 3.5  # per liter

car = Car(fuel_price)
bike = Bike(fuel_price)
truck = Truck(fuel_price)

car.calculate_trip_cost(distance)
bike.calculate_trip_cost(distance)
truck.calculate_trip_cost(distance)
