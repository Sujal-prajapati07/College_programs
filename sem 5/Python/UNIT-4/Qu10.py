import csv

try:
	with open("Qu10_Product.csv","r")as f:
		content=csv.reader(f)
		rows=list(content)

	if not rows:
		print("File is empty")
	else:
		for i in rows:
			if len(i)!=3:
				print("Inccorect Format")
				break
			print(i)

except FileNotFoundError:
	print("File not found")
except Exception as e:
	print(e)

#CSV stands for Comma-Separated Values.