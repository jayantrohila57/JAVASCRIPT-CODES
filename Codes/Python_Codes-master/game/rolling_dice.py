from random import randint as r #RANDOM
from time import sleep #TIMER
import os #TO CLEAR THE SCREEN
X = False   #DICE VALUE                                                            
def D(X): #FUNCTION
    print(" _______")  #DICE STRUCTURE
    print("|       |")
    print("|  ",X,"  |")
    print("|_______|")
game = False           #VALUE TO LOOP GAME
while game != 1: #LOOP GAME 
    X = [1,2,3,4,5,6]       #NO.OF DICE                                           
    A = X[r(0,5)] #PLAYER A RANDOM NO.
    B = X[r(0,5)] #PLAYER B RANDOM NO.
    game = int(input("\nPRESS 0=[START],1=[EXIT]\nINPUT=")) #GAME INPUT 
    print("COMPUTER's DICE -",D(B))      #A OUTPUT
    print("PLAYER's DICE -",D(A))        #B OUTPUT                                     
    if  B == A:print('THE GAME IS TIE')    #RESULTS               
    elif B > A:print('COMPUTER WINS YOU LOSE')
    elif B < A:print('COMPUTER LOSE YOU WIN')
    sleep(3)   #SLEEP TIME TO CLEAR THE RESULT
    os.system('cls') #CLEAR THE SCREEN


