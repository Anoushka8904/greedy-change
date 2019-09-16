change = float(input("How much change do you owe? (in dollars)")) 
#loop preventing negative value from being accepted
while change < 0:
    change = float(input("How much change do you owe? (in dollars)"))
pennies = int(change*100) #changes dollars to pennies; typecasts float to int
coins = 0
coins = pennies//25 #calculates & adds no. of 25c coins needed
coins += (pennies%25)//10 #calculates & adds no. of 10c coins needed
coins += ((pennies%25)%10)//5 #calculates & adds no. of 5c coins needed
coins += ((pennies%25)%10)%5 #calculates & adds no. of 1c coins needed
print(coins) #outputs total no. of coins needed
