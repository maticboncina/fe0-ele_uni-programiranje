// write a program that from 4 digit number chooses...

function chooseNumber(st, idx){
    var i, number;
    for (i = idx; i <= 3; i++){
        number = st % 10;
        st = (st - number) / 10;
    }
    return number;
}

var x = chooseNumber(259,0);
console.log(x);
x = chooseNumber(17,2);
console.log(x);