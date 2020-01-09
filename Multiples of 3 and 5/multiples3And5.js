let number=prompt()

// Summation of multiples of 3 and 5
function multiplesOf3And5(number){
    let i=0,sum=0,sum1=0,final=0;
    while (i<number){
        if (i%3===0){
            // console.log(i)
            sum+=i;
        }
        if (i%5===0){
            sum1+=i;
            console.log(i)
        }
        ++i;
    }
    final=sum+sum1;
    console.log(`Summation of multiples of 3 and 5 in range ${number} is ${final}`)
    return final
}

multiplesOf3And5(number);