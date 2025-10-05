import tkinter as tk

def addition():
	try:
		num1=float(entry1.get())
		num2=float(entry2.get())
		ans=num1+num2
		entry3.delete(0,tk.END) #Clears the result box before inserting the sum
		entry3.insert(0,str(ans)) #result as text into the third input box.
	except ValueError:
		entry3.delete(0,tk.END)
		entry3.insert(0,"Invalid") #If the input isn’t a valid number

def Quit():
	root.destroy()

root=tk.Tk()
root.title("Calculator")

tk.Label(root, text="Enter Num 1:").grid(row=0, column=0)
tk.Label(root, text="Enter Num 2:").grid(row=1, column=0)
tk.Label(root, text="The Sum is:").grid(row=2, column=0)

entry1 = tk.Entry(root)
entry2 = tk.Entry(root)
entry3 = tk.Entry(root)

#grid is use for places the button in the window layout
entry1.grid(row=0, column=1)
entry2.grid(row=1, column=1)
entry3.grid(row=2, column=1)

tk.Button(root, text="Quit", command=Quit).grid(row=3, column=0)
tk.Button(root, text="Show", command=addition).grid(row=3, column=1)

root.mainloop()
