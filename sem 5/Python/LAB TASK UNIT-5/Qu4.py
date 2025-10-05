class User:
    def __init__(self, name):
        self.name = name

    def send_message(self, chatroom, recipient_name, message):
        chatroom.deliver_message(self.name, recipient_name, message)

class ChatRoom:
    def __init__(self):
        self.users = {}

    def add_user(self, user):
        self.users[user.name] = user
        print(f"{user.name} joined the chat room.")

    def deliver_message(self, sender_name, recipient_name, message):
        if not self.users:
            raise Exception("Chat room is empty.")

        if recipient_name not in self.users:
            raise Exception(f"User '{recipient_name}' does not exist.")
        print(f"{sender_name} to {recipient_name}: {message}")

chatroom = ChatRoom()

u1 = User("Kirtan")
u2 = User("Sujal")

chatroom.add_user(u1)
chatroom.add_user(u2)

try:
    u1.send_message(chatroom, "Sujal", "Hello Sujal!")
    u2.send_message(chatroom, "Purav", "Hello Purav!")  #user doesn't exist
except Exception as e:
    print("Error:", e)
