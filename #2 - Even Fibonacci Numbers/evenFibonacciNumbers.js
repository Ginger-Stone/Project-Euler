// let number=100, sum=1, fibonacci=2, val=2, i=0, total=0;
// let sumEvenFibonacci=[];

// function getFibonacci(number){
//     while (fibonacci<number){
//         if (fibonacci%2===0){
//             sumEvenFibonacci.push(fibonacci);
//             // console.log()
//         }
//         sum+=val;
//         // console.log(sum);
//         val=fibonacci;
//         // console.log(val);
//         fibonacci=sum; 
//         // console.log(fibonacci);
//     }
//     console.log(sumEvenFibonacci);
// }
// function summedEvenFibonacci(){
//     while(i<sumEvenFibonacci.length){
//         total+=sumEvenFibonacci[i];
//         i++;
//     }
//     console.log(total);
// }
// getFibonacci(number);
// summedEvenFibonacci();


fiboEvenSum(10);

function fiboEvenSum(n){
    let sum=1, fibonacci=2, val=2, total=0;
    let sumEvenFibonacci=[];
    let i=0;
    while (i<n-1){
        if (fibonacci%2===0){
            sumEvenFibonacci.push(fibonacci);
        }
        sum+=val;
        // console.log(sum);
        val=fibonacci;
        // console.log(val);
        fibonacci=sum; 
        // console.log(fibonacci);
        i++;
    }
    console.log(sumEvenFibonacci)
    i=0;
    while(i<sumEvenFibonacci.length){
        total+=sumEvenFibonacci[i];
        i++;
    }
    console.log(total);
    return total
}