import tkinter as tk

def radio_choice():
	label.config(text="You selected : "+var.get())
	#var.get() reads the current value stored in the StringVar

root=tk.Tk()
root.title("Favourite Programming Language")

tk.Label(root,text="Choose your favourite programming language:").pack(anchor='w')

var=tk.StringVar()
var.set(None)#no radio button is selected by default

languages = ["Python", "Perl", "Java", "C++", "C"]

for lang in languages:
    tk.Radiobutton(root, text=lang, variable=var, value=lang, command=radio_choice).pack(anchor='center')
    #anchor is used to control alignment(west,south,east,north)

label=tk.Label(root)
label.pack()

root.mainloop()