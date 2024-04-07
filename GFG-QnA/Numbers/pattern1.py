def printPat(n):
    #Code here
      #s = ""
    #for a in reversed(1, n + 1):
        #for b in reversed(1, n + 1):
            # print((str(b)+" ")*a, end="")
          #  s += (str(b) + " ") * a

        #s += "$"
    #print(s)
    for i in range(n):
        for j in range(n):
            for k in range(n - i):
                print(n - j, end=" ")
        print("$",end="")
    print()
