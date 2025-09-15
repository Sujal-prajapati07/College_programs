from finance.tax import income_tax as it
from finance.tax import gst as GT

salary = float(input("Enter the salary: "))
product_price = float(input("Enter the product price: "))

tax_amount = it.calculate_tax(salary)
gst_amount = GT.calculate_gst(product_price)

final_amount = product_price + gst_amount

print(f"Income Tax on salary {salary:.2f}: {tax_amount:.2f}")
print(f"GST on product price {product_price:.2f}: {gst_amount:.2f}")
print(f"Final Payable Product Price: {final_amount:.2f}")

