#include <stdio.h>
#include <stdlib.h>

/*
  Struct (Yapı):
    Struct birden çok değişkeni tek bir veri yapısında birleştirirken her bir değişken ayrı bellek alanı kullanır.
    Struct, farklı veri türlerine sahip birden çok değişkeni tek bir veri yapısında birleştirmek için kullanılır.
    Her bir değişken, struct içinde kendi ismiyle birlikte tanımlanır ve bellekte ayrı ayrı yer kaplar.
    Struct içindeki her bir değişkene ayrı ayrı erişilebilir ve bu değişkenler bağımsız olarak kullanılabilir.
    Struct, birden çok veri elemanını saklamak ve bu elemanlara kolaylıkla erişmek için yaygın olarak kullanılır.
*/
struct testStruct
{
    int a,b;
}test1;

/*
  Union (Birleşim):
    Union aynı bellek bölgesini farklı veri türleri arasında paylaşır ve sadece bir değişkenin değeri aynı anda geçerli olabilir.
    Union, aynı bellek bölgesini farklı veri türleriyle paylaşan değişkenlerin tanımlanmasını sağlar.
    Union içindeki değişkenler aynı bellek bölgesini kullanır, yani bir değişkenin değeri değiştirildiğinde diğer değişkenler etkilenir.
    Union, farklı türlerle çalışırken bellek alanından tasarruf etmek için kullanılabilir.
    Ancak, union içinde yalnızca bir değişkenin değeri aynı anda geçerli olabilir. Bir değişkenin değeri değiştirildiğinde diğer değişkenlerin değeri geçersiz hale gelir.
*/
union testUnion
{
    int m,n;
}test2;

int main()
{
    int *A, *B, *M, *N;

    test1.a = 2;
    test1.b = 4;
    A = &test1.a;
    B = &test1.b;
    printf("Memory of Struct: %d\n", sizeof(test1)); // degiskenlerin toplam bellek boyutuna gore kapasitesi
    printf("A: %d ---> Adress of A: %d\n",test1.a,(void*)A);
    printf("B: %d ---> Adress of B: %d\n",test1.b,(void*)B);

    test2.m = 2;
    test2.n = 4;
    M = &test2.m;
    N = &test2.n;
    printf("Memory of Union: %d\n", sizeof(test2)); // degiskenlerin en yuksek bellek boyutuna gore kapasite
    printf("M: %d ---> Adress of M: %d\n",test2.m,(void*)M);
    printf("N: %d ---> Adress of N: %d\n",test2.n,(void*)N);

    return 0;
}
