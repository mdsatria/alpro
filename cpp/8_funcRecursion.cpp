// function untuk melakukan perkalian antara 2 bilangan integer dengan menggunakan rekursif
// input tidak boleh bernilai negatif
int recPerkalian(int a, int b)
{
    // base case
    if (a == 0)
    {
        return 0;
    }
    // base case
    else if (a == 1)
    {
        return b;
    }
    else
    {
        // recursion
        return b + recPerkalian(a-1, b);
    }    
}


// function factorial menggunakan rekursif
// input harus bernilai bilangan integer positif
int recFactorial(int a)
{
    // base case
    if (a == 0)
    {
        return 1;
    }
    else 
    {
        // rekursif
        return a *  recFactorial(a-1);
    }

}