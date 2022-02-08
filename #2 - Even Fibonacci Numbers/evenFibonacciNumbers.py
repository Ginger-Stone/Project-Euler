def evenFibonacciSum(number):
    i=0
    total=0
    val=2
    fibonacci=2
    summation=1
    evenSum=[]
    while i<number-1:
        if fibonacci%2==0:
            # print(fibonacci)
            evenSum.append(fibonacci)
        
        summation+=val
        val=fibonacci
        # print(evenSum)
        fibonacci=summation
        i+=1
    i=0;
    # print(len(evenSum))
    while i<len(evenSum):
        # print(i)
        # print (evenSum[i])
        total+=evenSum[i]
        # print(total)
        i+=1
    print(total)

evenFibonacciSum(int(input()))
