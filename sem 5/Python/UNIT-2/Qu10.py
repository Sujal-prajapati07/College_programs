contacts = {}

while True:
    print("\n---- Contact Book ----")
    print("1.Add Contact")
    print("2.Update Contact")
    print("3.Delete Contact")
    print("4.Search Contact")
    print("5.Exit")

    choice = int(input("Enter your choice (1-6): "))

    if choice == 1:
        name = input("Enter name: ")
        number = input("Enter number: ")
        contacts[name] = number
        print("Contact added!")

    elif choice == 2:
        name = input("Enter name to update: ")
        if name in contacts:
            contacts[name] = input("Enter new number: ")
            print("Contact updated...!")
        else:
            print("Contact not found in record...")

    elif choice == 3:
        name = input("Enter name to delete: ")
        if name in contacts:
            del contacts[name]
            print("Contact deleted...!")
        else:
            print("Contact not found in record...!")

    elif choice == 4:
        name = input("Enter name to search: ")
        print("Number:", contacts.get(name, "Not found in record!"))

    elif choice == 5:
        print("Exiting... Goodbye!")
        break

    else:
        print("Invalid choice! Please try again.")
