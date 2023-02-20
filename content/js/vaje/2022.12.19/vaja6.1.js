//write a program that will calculate decimal value from a hexdecimal value which is given in a array closed with "-1"
// example FC03 is hex = ['F', 'C', '0', '3', '-1']

slovar = Object();
slovar.podatki = [];
slovar.konec = 0;
slovar.insert = function (kljuc, vrednost) {
    var i;
    for (i = 0; i < slovar.konec; i = i + 1) {
        if (slovar.podatki[i][0] == kljuc) {
            slovar.podatki[i][1] = vrednost;
            return;
        }
    }
    slovar.podatki[i] = [kljuc, vrednost];
    slovar.konec = slovar.konec + 1;
};
slovar.lookup = function (kljuc) {
    var i;
    for (i = 0; i < slovar.konec; i = i + 1) {
        if (slovar.podatki[i][0] == kljuc) {
            return slovar.podatki[i][1];
        }
    }
    return -1;
};

var hex = ['F', 'C', '0', '3', '-1'];
var dec = 0;
var hexdecimal = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', '-1'];
var decimal = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, '-1'];
for (i = 0; hexdecimal[i] != '-1'; i = i + 1) {
    slovar.insert(hexdecimal[i], decimal[i]);
}
for (i = 0; hex[i] != '-1'; i = i + 1) {
    dec = dec * 16 + slovar.lookup(hex[i]);
}
console.log(dec);