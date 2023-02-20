// write a program 

function combineArraysWithNumberOfElements(tab1, tab2){
    for (var i = 1; i < tab1[0]; i++){
        tab1[i] = tab1[i];
    }
    for (var j = 1; j < tab2[0]; j++){
        tab1[i] = tab2[j];
        i++;
    }
}

var t, t1 = [3,1,2,3], t2 = [3,4,5,6]
t = combineArraysWithNumberOfElements(t1, t2);
console.log(t);
