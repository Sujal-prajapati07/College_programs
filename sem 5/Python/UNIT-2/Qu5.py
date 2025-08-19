cities={
    "Delhi":25,
    "Mumbai":30,
    "Bangalore":20,
    "Chennai":45,
    "Kolkata":10
}

new_dict={}

for city in cities:
    if cities[city]<15 or cities[city]>40:
        new_dict[city]=cities[city]
    
print(new_dict)