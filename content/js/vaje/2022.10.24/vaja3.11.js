// write a program that calculates scalar product of two vectors x and y using |a| * |b| * cos(alfa) formula
// write a program that calculates scalar product of two vectors x and y using |a| * |b| * cos(alfa) formula

var x = [1, 2, 3, 0];
var y = [0, 3, 2, 1];
var i, s = 0;
for (i = 0; i < x.length; i++) {
    s += x[i] * y[i];
}
console.log(s);

var x = [1, 2, 3, 0], n = 4;
var y = [0, 3, 2, 1];
var i, prod = 0;
for (i = 0; i < n; i++) {
    prod += x[i] * y[i];
}
console.log(prod);