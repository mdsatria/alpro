// function untuk melakukan perkalian antara 2 bilangan integer dengan menggunakan rekursif
// input tidak boleh bernilai negatif
int recPerkalian(int a, int b)
{
    // base case
    if (b==0)
    {
        return 0;
    }
    // base case
    else if (b==1)
    {
        return a;
    }
    else
    {
        // recursion
        return a + recPerkalian(a, b-1);
    }    
}


// function factorial menggunakan rekursif
// input harus bernilai bilangan integer positif
int recFactorial(int a)
{
    // base case
    if ((a==0) || (a==1))
    {
        return 1;
    }
    else 
    {
        // rekursif
        return a *  recFactorial(a-1);
    }

}