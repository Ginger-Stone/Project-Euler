function fiboEvenSum(n) {
  // You can do it!
  let prev = 1,
    now = 2,
    sum = 0,
    i = 0;
  while (now < n) {
    if (now % 2 == 0) {
      console.log(now);
      sum += now;
    }

    // i comes in because there is exchange in values and the two can't interchange without an extra variable
    i = prev;
    prev = now;
    now += i;
  }
  console.log(sum);
  output(n, sum);
  return sum;
}

fiboEvenSum(10);

function output(input, sum) {
  document.getElementById("input").innerHTML = input;
  document.getElementById("output").innerHTML = sum;

  document.getElementById("output-container").classList.remove("visibility");
}
