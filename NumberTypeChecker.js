/ program that checks if the number is positive, negative or zero
// input from the user
const number = parseInt(prompt("Enter a number: "));

if (number > 0) {
    console.log("This is a positive Number");
}

// check if number is 0
else if (number == 0) {
  console.log("The is zero");
}

// if number is less than 0
else {
     console.log("This is a Negative Number");
}