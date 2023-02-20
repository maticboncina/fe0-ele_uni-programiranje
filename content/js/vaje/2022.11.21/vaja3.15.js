// write a program that implenets a parity check in a 2D array of 0s and 1s in the last column

prenos = [
    [0, 0, 1, 1, 0, 1, 0, 1],
    [1, 0, 1, 1, 0, 1, 0, 0]
    [0, 1, 0, 1, 0, 0, 1, 1]
    [1, 1, 0, 1, 0, 0, 1, 0]
]

var n = 4,
    m = 8;
var i, j, ones, error = 0;

for (i = 0; i < n && error == 0; i++) {
    ones = 0;
    for (j = 0; j < m; j++) {
        if (prenos[i][j] == 1) {
            ones++;
        }
    }

    if (ones % 2 == 1) {
        error++;
    }

}

for (i = 0; i < m && !error == 0; i++) {
    ones = 0;
    for (j = 0; j < n; j++) {
        if (prenos[j][i] == 1) {
            ones++;
        }
    }
}

if (error = 1) {
    console.log("Error in transmission");}
    else {
        console.log("No error in transmission");
    }