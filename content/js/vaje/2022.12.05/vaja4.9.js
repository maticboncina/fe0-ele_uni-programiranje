// ne deluje...

function changeArrays (tab1, tab2){
    var i;
    for (i = 0; tab1[i] != 0; i=i++){
        tab1[i] = tab1[i] + tab2[i];
        tab2[i] = tab1[i] - tab2[i];
        tab1[i] = tab1[i] - tab2[i];
    }
     
// write a fucntion that changes arrays without use of local variable   

tab1 = [1, 2, 3, 0];
tab2 = [4, 5, 6, 0];

console.log(tab1);
console.log(tab2);

changeArrays(tab1, tab2);
console.log(tab1);
console.log(tab2);


}