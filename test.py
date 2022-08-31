print(" *** Transfrom second ***")

ss = input("Enter seconds : ")
temp = ss
try:
    ss = int(ss)
    mm = ss//60
    ss = ss%60
    hh = mm//60
    mm = mm%60
    dd = hh//24
    hh = hh%24
    ww = dd//7
    dd = dd%7

    print(temp, "seconds ==> ", end="")
    if(ww>0):
        print(ww, "weeks", end="")
    if(dd>0):
        print(dd, "days", end="")
    if(hh>0):
        print(hh, "hours", end="")
    if(mm>0):
        print(mm, "minutes", end="")
    if(ss>0):
        print(ss, "seconds", end="")

    print("\n --- program end ---")
except:
    print("please enter in whole number -->", temp)

