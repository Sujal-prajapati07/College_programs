class Question:
    def __init__(self, text, options, correct_index):
        self.text = text
        self.options = options
        self.correct_index = correct_index

    def ask(self):
        print(self.text)
        for i, option in enumerate(self.options):
            print(f"{i + 1}. {option}")
        try:
            answer = int(input("Enter your answer (1-4): "))
            if answer < 1 or answer > 4:
                raise ValueError("Invalid answer.")
            return answer == self.correct_index + 1
        except ValueError as e:
            print("Error:", e)
            return False

class Player:
    def __init__(self, name):
        self.name = name
        self.score = 0

class Quiz:
    def __init__(self, questions):
        self.questions = questions

    def start(self, player):
        for q in self.questions:
            if q.ask():
                player.score += 1
        print(f"{player.name}'s score: {player.score}")
        try:
            with open("Qu5_score_save.txt", "a") as f:
                f.write(f"{player.name}: {player.score}\n")
        except:
            print("File error while saving score.")

# Example
questions = [
    Question("Capital of India?", ["Delhi", "Mumbai", "Chennai", "Kolkata"], 0),
    Question("5 + 3 = ?", ["6", "7", "8", "9"], 2),
    Question("10 * 3 = ?", ["60", "30", "80", "90"], 1)
]

name = input("Enter player name: ")
player = Player(name)
quiz = Quiz(questions)
quiz.start(player)
