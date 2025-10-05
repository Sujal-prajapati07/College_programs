import tkinter as tk

from tkinter import messagebox

#displays an information pop-up.
def message():
	messagebox.showinfo("Hello World","Welcome")

root=tk.Tk()
root.title("Qu1 Example code")
root.geometry("400x300")

button=tk.Button(root,text="Click me",font=("Arial",30),command=message)
button.pack(pady=60)

root.mainloop()