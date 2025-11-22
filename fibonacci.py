def fibo(n):
    if(n==0 or n==1):
        return n
    else:
        return fibo(n-1)+fibo(n-2)


n=int(input("enter the last term of fibonacci series:\n"))
for i in range(0,n):
    print(fibo(i),end="  ")
    #rember the term start from 0in t term case
