# here is the id number we need to find there name

# this is immutable we can not change it 
id_list:tuple = (1, 2, 4, 6, 10)

user_list:dict = {1: "Govind", 2: "Lila", 3: "Ram", 4: "Dashrath", 5: "Jitenra" , 6: "Krunal", 8: "Janak", 10: "Shubham"}

for id in id_list:
    print(user_list[id])