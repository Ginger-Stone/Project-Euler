function largestPrimeFactor(number) {
  // Good luck!
  let i = 3,
    j = 0;
  primeNumbers = [];
  if (number > 100000000) {
    i = 1000;
  } else {
    if (number >= 2) {
      primeNumbers.push(2);
    }
    if (number >= 3) {
      primeNumbers.push(3);
    }
    if (number >= 5) {
      primeNumbers.push(5);
    }
    if (number >= 7) {
      primeNumbers.push(7);
    }
  }
  while (i < Math.sqrt(number)) {
    // only check odd values of i as only 2 is a prime factor and even
    if (i % 2 != 0 && i != 3 && i % 5 != 0 && i % 7 != 0) {
      if (number % i == 0) {
        primeNumbers.push(i);
      }
    }
    i++;
  }

  // checkLastIfPrime(primeNumbers.length, primeNumbers);

  // console.log(primeNumbers);
  return checkLastIfPrime(primeNumbers);
}

function checkLastIfPrime(primeNumbers) {
  j = 0;
  let lastValue;
  while (j < primeNumbers.length) {
    lastValue = primeNumbers[primeNumbers.length - 1];
    if (primeNumbers[j] != lastValue && lastValue % primeNumbers[j] == 0) {
      primeNumbers.pop();
      lastValue = primeNumbers[primeNumbers.length - 1];
      // console.log(lastValue);
      checkLastIfPrime(primeNumbers);
    }
    j++;
  }
  console.log(primeNumbers);
  return lastValue;
}
