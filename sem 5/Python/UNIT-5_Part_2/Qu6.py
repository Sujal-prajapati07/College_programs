import tkinter as tk

root=tk.Tk()
root.geometry("400x300")

button1=tk.Button(root,text="Red",bg="red")
button1.pack()
button2=tk.Button(root,text="Yellow",bg="yellow")
button2.pack()
button3=tk.Button(root,text="Pink",bg="pink")
button3.pack()
button4=tk.Button(root,text="Green",bg="green")
button4.pack()
button5=tk.Button(root,text="Purple",bg="purple")
button5.pack()
button6=tk.Button(root,text="Orange",bg="orange")
button6.pack()
button7=tk.Button(root,text="Blue",bg="blue")
button7.pack()

root.mainloop()