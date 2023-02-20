// write a program which as a parameter takes an array natural number with a guard and sorts them in ascending order


function uredi(t) {
    var i;
    for(i = 0; t[i + 1] != 0; i++) {
        for(var j = 0; t[j + 1] != 0; j++) {
            if(t[j] > t[j + 1]) {
                var tmp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = tmp;
            }
        }
    }

}

var tab1 = [3, 7, 2, 66, 2, 0];
var tab2 = [15, 8 , 449, 61, 7, 38, 0];
uredi(tab1);
uredi(tab2);
console.log(tab1);
console.log(tab2);





