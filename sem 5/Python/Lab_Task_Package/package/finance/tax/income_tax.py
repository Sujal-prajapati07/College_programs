def calculate_tax(income):
	if income>50000:
		tax_amount=income*0.10
		return tax_amount
	else:
		tax_amount=income*0.05
		return tax_amount
