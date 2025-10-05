import tkinter as tk

def check_age():
    if var.get() == 1:
        result_label.config(text="You are not eligible for voting")
    elif var.get() == 2:
        result_label.config(text="You are eligible for voting")

root = tk.Tk()
root.title("Voting Eligibility")
root.geometry("400x150")

heading = tk.Label(root, text="Your Age:", font=('Arial', 10, 'bold'))
heading.pack(pady=10)

var = tk.IntVar()

rb1 = tk.Radiobutton(root, text="Less than 18", variable=var, value=1, command=check_age)
rb1.pack()

rb2 = tk.Radiobutton(root, text="Greater than 18", variable=var, value=2, command=check_age)
rb2.pack()

result_label = tk.Label(root, text="", font=('Arial', 10))
result_label.pack(pady=10)

root.mainloop()
