'''
Here,in this game :
s and 1 -> Stone
p and 2 -> Paper
sci and 3 -> Scissors

'''
import random

game_dict = {"s": "Stone", "p": "Paper", "sci": "Scissors"}
computer_dict = {1: "Stone", 2: "Paper", 3: "Scissors"}
player_dict = {"s": 1, "p": 2, "sci": 3}

computer_choice = random.choice([1,2,3])
computer = computer_choice

player_choice = input("Choose any of the following - (s/p/sci) : ").lower()

if player_choice in player_dict:
    player = player_dict[player_choice]

    print("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|")
    print(f"    You choose : {game_dict[player_choice]}")
    print(f"    Computer choose : {computer_dict[computer_choice]}")
    print("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|")

    if computer == player:
        print("    Its a draw ! 🤝")
    else:
        if computer == 1 and player == 2:
            print("    Congratulations ! 🎊\n    You win ! 🏆")
        elif computer == 1 and player == 3:
            print("    You lose ! 💔")
        elif computer == 2 and player == 1:
            print("    You lose ! 💔")
        elif computer == 2 and player == 3:
            print("    Congratulations ! 🎊\n    You win ! 🏆")
        elif computer == 3 and player == 1:
            print("    Congratulations ! 🎊\n    You win ! 🏆")
        elif computer == 3 and player == 2:
            print("    You lose ! 💔")
else:
    print("You entered wrong input. Please try again.")
