import random
import time
print("---------------------------------------------------------------------------------")
print('-----------------WELCOME TO HUNGMAN GAME BY JAYANT ROHILA------------------------\n\n')
name=input('ENTER YOUR NAME------------------------------------------------------------------\n>>>>>>>')
print('\nHELLO',name,'BEST OF LUCK\n---------------------------------------------------------------------------------\n\n')
time.sleep(2)
print("--------------------------THE GAME IS ABOUT TO START!----------------------------\n\n")
print("--------------------------- LET'S PLAY HUNGMAN GAME------------------------------\n\n")
time.sleep(3)
def main():
    global count
    global display
    global word
    global already_guessed
    global length
    global play_game
    word_to_guess = ['Book','Monday','Movie','Promise','Kids','Adults']
    word = random.choice(word_to_guess)
    length = len(word)
    count=0
    display='_'*length
    already_guessed=[]
    play_game=""
def play_loop():
    global play_game
    play_game=input('DO YOU WANT TO PLAY AGAIN????????-----------[YES=Y]OR[NO=N]')
    while play_game not in ['y','Y','N','n']:
        play_game=input('DO YOU WANT TO PLAY AGAIN????????-----------[YES=Y]OR[NO=N]')
        if play_game == 'y':
            main()
            hungman()
        elif play_game == "n":
            print('--------THANK YOU FOR PLAYING-------')
            exit()    
def hungman():
    global count
    global display
    global word
    global already_guessed
    global play_game
    limit = 5
    guess = input('-------THIS IS A HUNGMAN WORD:'+ display +'ENTER YOUR GUESS:\n')
    guess = guess.strip()
    if len(guess.strip()) == 0 or len(guess.strip()) >= 2 or guess <= '9':
        print('----------------INVALID INPUT TRY A LETTER----------------\n')
        hungman()
    elif guess in word:
        already_guessed.extend([guess])
        index = word.find(guess)
        word = word[:index]+'_'+ word[index + 1:]
        display=display[:index]+[guess]+display[index + 1:]
        print(display + '\n')
    elif guess in already_guessed:
        print('-----------TRY ANOTHER LETTER---------\n') 
    else:
        count += 1
        if count == 1:
                time.sleep(1)
                print(" ________\n"
                    "   |       \n"
                    "   |       \n"
                    "   |       \n"
                    "   |       \n"
                    "   |       \n"
                    "   |       \n"
                    "___|___    \n")
                print('WRONG GUESS.'+ str(limit-count)+'GUESS REMAINING\n')
        elif count == 2:
                time.sleep(1)
                print(" ________\n"
                    "   |      |\n"
                    "   |      |\n"
                    "   |       \n"
                    "   |       \n"
                    "   |       \n"
                    "   |       \n"
                    "___|___    \n")
                print('WRONG GUESS.'+ str(limit-count)+'GUESS REMAINING\n')
        elif count == 3:
                time.sleep(1)
                print(" ________\n"
                    "   |      |\n"
                    "   |      |\n"
                    "   |      | \n"
                    "   |       \n"
                    "   |       \n"
                    "   |       \n"
                    "___|___    \n")
                print('WRONG GUESS.'+ str(limit-count)+'GUESS REMAINING\n')
        elif count == 4:
                time.sleep(1)
                print(" ________\n"
                    "   |      |\n"
                    "   |      |\n"
                    "   |      | \n"
                    "   |      O \n"
                    "   |       \n"
                    "   |       \n"
                    "___|___    \n")
                print('WRONG GUESS.'+ str(limit-count)+'GUESS REMAINING\n')       
        elif count == 5:
                time.sleep(1)
                print(" ________\n"
                    "   |      |\n"
                    "   |      |\n"
                    "   |      | \n"
                    "   |      O \n"
                    "   |     /|\\n"
                    "   |     / \\n"
                    "___|___    \n")
                print('WRONG GUESS! YOU ARE HANGED!')
                print('THE WORD WAS:'+ already_guessed,word) 
                play_loop()
    if word == '_'* length:
        print('CONGRATS! YOU HAVE GUSSED RIGHT WORD CORRECTLY!')
        play_loop()
    elif count != limit:
        hungman()
main()
