function multiples3And5(input) {
  input = input.value;
  let i = 0,
    sum = 0;
  while (i < input) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
    i++;
  }
  output(input, sum);
  return sum;
}

function output(input, sum) {
  document.getElementById("input").innerHTML = input;
  document.getElementById("output").innerHTML = sum;

  document.getElementById("output-container").classList.remove("visibility");
}
