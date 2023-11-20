var ave = sd = n = a = b = 0;
var x = [];

//reading n from the user
n = Number(prompt("Enter the number of elements: "));

//reading the elements
for (var i = 0; i < n; i++) {
    x[i] = Number(prompt("Enter the element: [" + (i + 1) + "]"));
    ave += x[i];
}

//calculating the average
ave /= n;
console.log("Average: " + ave);

//calculating the standard deviation
for (var i = 0; i < n; i++) {
    a += Math.pow(x[i] - ave, 2);
}

b = a / n;
sd = Math.sqrt(b);
console.log("Standard Deviation is: " + sd);

