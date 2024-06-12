 int z = (x%mod)-sisa; 
    sisa += z;             
    printf("%d\n", z);
    angka(mod*10, sisa, x);