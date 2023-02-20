const prompt = require('prompt-sync')();

const x = prompt('Vpisite stevilo: ');
var i = 1;
while (i <= x) {
    if (x % i == 0) {
        console.log(i);
    }
    i++;

    isPrime(x);
}

/* 
const prompt("Vpisi stevilo")*1; // Boljši način, da uporabimo konstanto "x", ker se ne spreminja skozi program.
for (let i = 1; i < x; i++) { // Raje uporabimo <, ker ne rabimo preverjat zadnjega števila.
    if (x % i == 0) {
        console.log(i);
    }
}
*/

// Še boljši sistem kot spodaj je, da spišemo naslednji algoritem (Siev of Eratosthemes) - Primerno za velika števila
// https://upload.wikimedia.org/wikipedia/commons/b/b9/Sieve_of_Eratosthenes_animation.gif 

 function isPrime(x) {
    if (x <= 1) {
        return false;
        console.log("Ni praštevilo");
    }

    for (var j = 2; j < x; j++) {
        if (x % j == 0) {
            return false;
            console.log("Ni praštevilo");
        }
    }
    return true;
    console.log("Je praštevilo");
}