import tkinter as tk

def select_gender():
    result_label.config(text="You selected: " + var.get())

root = tk.Tk()
root.title("Radiobutton Example")

var = tk.StringVar()
var.set(None)

tk.Label(root, text="Please select...").pack()

tk.Radiobutton(root, text="Male", variable=var, value="Male", command=select_gender).pack()
tk.Radiobutton(root, text="Female", variable=var, value="Female", command=select_gender).pack()

result_label = tk.Label(root, text="")
result_label.pack()

tk.Button(root, text="Quit", command=root.quit).pack()

tk.Button(root, text="Show", command=select_gender).pack()

root.mainloop()
