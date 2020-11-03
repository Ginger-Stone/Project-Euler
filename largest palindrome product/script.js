function largestPalindromeProduct(n) {
  let upperLimit = Math.pow(10, n);
  let lowerLimit = Math.pow(10, n - 1);
  let palindrome = 0;
  for (i = lowerLimit; i < upperLimit; i++) {
    for (j = lowerLimit; j < upperLimit; j++) {
      let product = i * j;
      let last = product.toString().slice(-1);
      let first = product.toString()[0];

      if (first == last && product > palindrome) {
        product = product.toString();
        let reverse = product.toString().split("").reverse().join("");

        if (product == reverse) {
          palindrome = parseInt(product);
        }
      }
    }
  }

  console.log(palindrome);
}

largestPalindromeProduct(3);
