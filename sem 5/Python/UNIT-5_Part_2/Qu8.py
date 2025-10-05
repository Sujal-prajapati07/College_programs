import tkinter as tk

def Quit():
	root.destroy()

def show_details():
	print("FirstName : ",entry1.get())
	print("LastName : ",entry2.get())
	print("Designation : ",entry3.get())
	print("Company : ",entry4.get())
	print("Country : ",entry5.get())

root=tk.Tk()
root.title("Show Details")

tk.Label(root,text="FirstName").grid(row=0,column=0)
tk.Label(root,text="LastName").grid(row=1,column=0)
tk.Label(root,text="Designation").grid(row=2,column=0)
tk.Label(root,text="Company").grid(row=3,column=0)
tk.Label(root,text="Country").grid(row=4,column=0)

entry1 = tk.Entry(root)
entry2 = tk.Entry(root)
entry3 = tk.Entry(root)
entry4 = tk.Entry(root)
entry5 = tk.Entry(root)

entry1.grid(row=0,column=1)
entry2.grid(row=1,column=1)
entry3.grid(row=2,column=1)
entry4.grid(row=3,column=1)
entry5.grid(row=4,column=1)

tk.Button(root,text="Quit",command=Quit).grid(row=5,column=0)
tk.Button(root,text="Show",command=show_details).grid(row=6,column=1)

root.mainloop()