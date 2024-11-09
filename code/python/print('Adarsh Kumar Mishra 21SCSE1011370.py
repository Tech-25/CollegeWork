print('Adarsh Kumar Mishra 21SCSE1011370 Section-17')

l=(input ("Enter a alphabet: "))

if(l.isalpha()):

    while True:

        if l in ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', '0', 'U'): 
             print("%s is a vowel." % l)

        elif l == "9":

             print("GOING OUT OF PROGRAM")

             break

        elif (l.isdigit()): 
             print("THE WRONG INPUT")

        else:

             print("%s is not a vowel." %l)

        l=(input ("Enter a alphabet : "))

elif(l== 9): 
    print ("GOING OUT OF PROGRAM") 
else:

    print ("THE WRONG INPUT")