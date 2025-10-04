class InvalidPaymentError(Exception):
    pass

class RideCancelledError(Exception):
    pass

class Driver:
    def __init__(self, name):
        self.name = name

class Passenger:
    def __init__(self, name):
        self.name = name

class Ride:
    def __init__(self, driver, passenger, distance, surge=1.0):
        self.driver = driver
        self.passenger = passenger
        self.distance = distance
        self.surge = surge
        self.fare = self.distance * 10 * self.surge  # Rs 10 per km

class Payment:
    def __init__(self, ride, method):
        self.ride = ride
        self.method = method.lower()

    def process_payment(self):
        if self.method not in ["cash", "card", "upi"]:
            raise InvalidPaymentError("Invalid payment method!")

        with open("Qu16_rides.txt", "a") as f:
            f.write(f"{self.ride.passenger.name} -> {self.ride.driver.name}, "
                    f"Distance: {self.ride.distance} km, Fare: Rs {self.ride.fare:.2f}, "
                    f"Payment: {self.method}\n")
        print(f"Payment of Rs {self.ride.fare:.2f} successful via {self.method}!")

try:
    d = Driver("Sujal")
    p = Passenger("Kirtan")
    ride = Ride(d, p, distance=12, surge=1.5)
    print(f"Ride fare: Rs {ride.fare:.2f}")
    
    payment_method = input("Enter payment method (cash/card/upi): ")
    payment = Payment(ride, payment_method)
    payment.process_payment()

except InvalidPaymentError as e:
    print("Payment Error:", e)

except RideCancelledError:
    print("Ride was cancelled!")
