# add friend to the list

friends = []

print("type nothing for end the loop")

name=input("Friend: ")
while name:
    friends.append(name)
    name=input("Friend: ")

print(friends)