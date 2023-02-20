// write a program that generates a line in pascal's triangle

var n = 5;
var t = [1];
var i, j;
for (i = 1; i <= n; i++) {
    t[i] = 1;
    for (j = i - 1; j > 0; j--) {
        t[j] = t[j] + t[j - 1];
    }
}
console.log(t);


