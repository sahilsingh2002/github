def towerofhanoi(n,fro,to,between):
    if n==0:
        print("fuckoff")
    else:
        towerofhanoi(n-1,fro,between,to)
    print(f"put {n-1}th disk from {fro} to {between} ")
    towerofhanoi(n,between,to,fro)
    print("done")

n=int(input()) 
towerofhanoi(n,1,2,3)


