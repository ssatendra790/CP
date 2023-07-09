number_of_guesses = int(input("Enter the number of guesses you want: "))
counter = 1
actual_answer = "satendra"
flag = False
while counter <= number_of_guesses:
    guess = input("Your "+ str(counter) +" Guess is: ")
    if guess == actual_answer:
        print("Congratulations, You Win!")
        flag = True
        break
    counter+=1

if flag==False:
    print("Sorry, You loose!")