import tkinter as tk

def show_selection():
    selected = []
    if var1.get() == 1:
        selected.append("Bananas")
    if var2.get() == 1:
        selected.append("Chicken")
    if var3.get() == 1:
        selected.append("Stuffed Peppers")
    result_label.config(text="You selected: " + ", ".join(selected))

root = tk.Tk()
root.title("Favourite Food")
root.geometry("400x150")

heading = tk.Label(root, text="Choose Your Favourite Food", font=('Arial', 10, 'bold'))
heading.pack(pady=10)

var1 = tk.IntVar()
var2 = tk.IntVar()
var3 = tk.IntVar()

frame = tk.Frame(root)
frame.pack()

cb1 = tk.Checkbutton(frame, text="Bananas", variable=var1, command=show_selection)
cb1.pack(side=tk.LEFT, padx=10)

cb2 = tk.Checkbutton(frame, text="Chicken", variable=var2, command=show_selection)
cb2.pack(side=tk.LEFT, padx=10)

cb3 = tk.Checkbutton(frame, text="Stuffed Peppers", variable=var3, command=show_selection)
cb3.pack(side=tk.LEFT, padx=10)

result_label = tk.Label(root, text="", font=('Arial', 10))
result_label.pack(pady=10)

root.mainloop()
