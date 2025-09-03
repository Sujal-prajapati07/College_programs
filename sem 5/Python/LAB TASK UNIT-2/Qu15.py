keys = ["name", "age"]
values = ["Prince", 25]

d = dict(zip(keys, values))
print("Original Dictionary:", d)

d["age"] = 26
print("Updated :", d)
