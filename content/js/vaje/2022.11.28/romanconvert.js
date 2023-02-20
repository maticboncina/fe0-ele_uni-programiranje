// write a program that converts from arabic to roman numbers

/*
function arabicToRoman(num){
    var roman = "";
    var i = 0;
    var arabic = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1];
    var romanNum = ["M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"];

    while (num > 0){
        if (num >= arabic[i]){
            roman += romanNum[i];
            num -= arabic[i];
        }
        else{
            i++;
        }
    }
    return roman;
}
*/

function addElement(tab, el){
    var i;
    for(i = 0; tab[i] != 0; i++){
        tab[i] = el;
        tab[i + 1] = 0;
    }
}
function romanExec(arabic, ah, al, rh, rl, roman){
    for(; arabic >= ah; arabic = arabic - ah){
        addElement(roman, rh);
    }
    if (arabic >= ah - al){
        arabic = arabic - ah + al;
        addElement(roman, rl);
        addElement(roman, rh);
    }
    return arabic;
}
function arabitToRoman(arabNum, romanNum){
    var arabic  = [1000, 500, 100, 50, 10, 5, 1, 0, 0];
    var roman   = ["M", "D", "C", "L", "X", "V", "I", 0, 0];
    var i;
    for (i = 0; arabNum > 0; i++){
        arabNum = romanExec(arabNum, arabic[i], arabic[i + 2 - i % 2], roman[i], roman[i + 2 - i % 2], romanNum);

    }
}
var romanNum = [0];
arabicToRoman(3449, romanNum);
console.log(romanNum);
