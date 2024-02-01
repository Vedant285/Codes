def Pattern(n):
    for i in range(n,0,-1):
        for j in range(i,0,-1):
            print("*" ,end=' ')
        print()

n=int(input("Enter a number "))
Pattern(n)




