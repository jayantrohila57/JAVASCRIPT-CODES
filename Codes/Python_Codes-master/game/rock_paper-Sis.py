from random import randint
t=['Rock' , 'Paper','Scissors']
computer = t[randint(0,2)]
player = False
while player == False:
    player = input("Rock,Paper,Scissors?")
    print("computer choose -->",computer)
    
    if player == computer:print('tie!') 
    elif player == "Rock":
        if computer == "Paper":print("YOU LOSE!",computer,"COVERS",player)
        else:print("YOU WIN!",player,"SMASH",computer)
    elif player == "Paper":
        if computer == "Scissors":print("YOU LOSE!",computer,"CUTS",player)
        else:print("YOU WINS",player,"COVERS",computer)
    else:print("THAT'S INVALID INPUT")

player = False
computer = t[randint(0,2)]
