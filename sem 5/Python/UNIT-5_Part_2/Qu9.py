import tkinter as tk

def show_selected(event):
    selected = listbox.get(listbox.curselection())
    label.config(text=selected) #updates the Label’s

def Quit():
	root.destroy()

root=tk.Tk()
root.geometry("400x300")

listbox=tk.Listbox(root)

listbox.pack()

list1=["PHP","ROR","PYTHON","ANROID","IOS"]

for i in list1:
	listbox.insert(tk.END,i)

#Whenever the user selects an item automatically call the function show_selected
listbox.bind("<<ListboxSelect>>", show_selected)

# Label to display selected value
label = tk.Label(root, text="", font=("Arial", 14))
label.pack(pady=10)

button=tk.Button(root,text="Quit",command=Quit)
button.pack()

root.mainloop()