// write a proram that returns sinus for a given angle
/*
 const angle = 30;
 const angleInRadians = angle * Math.PI / 180;
 const sinus = Math.sin(angleInRadians);
 console.log(sinus);
*/

const kot = 30;
function sinus(kot) {
    var vsota = kot;
    var nasl, clen = kot;
    i = 1;
    while(Math.abs(clen) > 0.00001) {
        nasl = (-1) * clen * kot * kot / ((2 * i) * (2 * i + 1));
        i = i + 1;
        vsota = vsota + nasl;
        clen = nasl;
        console.log(vsota);
    }
    return vsota;
}

console.log(sinus(Math.PI / 4));