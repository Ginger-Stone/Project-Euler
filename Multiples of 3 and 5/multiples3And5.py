number=int(input())

def multiplesOf3And5(number):
    i=0;
    sum0=0;
    sum1=0;
    sumBoth=0
    while i<number:
        # divisible by both
        if(i%3==0 and i%5==0):
            sumBoth+=i
        elif i%3==0:
            sum0+=i
            print(i)
            # print(sum0)
        elif i%5==0:
            sum1+=i
            print(i)
        i+=1
    final=sum0+sum1+sumBoth
    print("Summation of multiples of 3 and 5 is %d" %final)
    return final
            
multiplesOf3And5(number)