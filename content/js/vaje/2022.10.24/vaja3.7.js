var t = [5, 2, 3, 55, 12, 13];
var odd=[0], even=[0];
var i;
for (i = 1; i <= t[0]; i++) {
    if (t[i] % 2 == 0) {
        even[0]++;
        even[even[0]] = t[i];
    }
    else {
        odd[0]++;
        odd[odd[0]] = t[i];
    }
}
console.log(odd);
console.log(even);



