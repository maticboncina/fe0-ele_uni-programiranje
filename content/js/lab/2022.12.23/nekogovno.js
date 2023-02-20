function test(n) {
    return n * n;
    }

    for (n = 0; n < 3; n = n + 1) {
    i = test (n);
    console.log(i);
    }

    console.log(i);
    i = test(n + 1);

    console.log(i);
