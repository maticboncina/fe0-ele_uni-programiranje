// write a program that calculates the sum of all numbers in the array

t = [[1.3, 0.1, 4.6, 3.8,0]
    [0.3, 1.1, 0]
    [1.5, 2.5, 0.4, 0]
    [0]
]

/* 
function sum(t) {
    var s = 0;
    for (var i = 0; i < t.length; i++) {
        for (var j = 0; j < t[i].length; j++) {
            s += t[i][j];
        }
    }
    return s;
}
console.log(sum(t));
*/

var i, j, vsota = 0;
for (i = 0; t[i][0] != 0; i = i++){
    for (j = 0; t[i][j] != 0; j = j++){
        vsota += t[i][j];
    }

}

console.log(vsota);