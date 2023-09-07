#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50

/*
  Struct (Yapı):
    Struct birden çok değişkeni tek bir veri yapısında birleştirirken her bir değişken ayrı bellek alanı kullanır.
    Struct, farklı veri türlerine sahip birden çok değişkeni tek bir veri yapısında birleştirmek için kullanılır.
    Her bir değişken, struct içinde kendi ismiyle birlikte tanımlanır ve bellekte ayrı ayrı yer kaplar.
    Struct içindeki her bir değişkene ayrı ayrı erişilebilir ve bu değişkenler bağımsız olarak kullanılabilir.
    Struct, birden çok veri elemanını saklamak ve bu elemanlara kolaylıkla erişmek için yaygın olarak kullanılır.
*/

struct structTest
{
    int a,b;
}structTest;


/*
    Union (Birleşim):
    Union aynı bellek bölgesini farklı veri türleri arasında paylaşır ve sadece bir değişkenin değeri aynı anda geçerli olabilir.
    Union, aynı bellek bölgesini farklı veri türleriyle paylaşan değişkenlerin tanımlanmasını sağlar.
    Union içindeki değişkenler aynı bellek bölgesini kullanır, yani bir değişkenin değeri değiştirildiğinde diğer değişkenler etkilenir.
    Union, farklı türlerle çalışırken bellek alanından tasarruf etmek için kullanılabilir.
    Ancak, union içinde yalnızca bir değişkenin değeri aynı anda geçerli olabilir. Bir değişkenin değeri değiştirildiğinde diğer değişkenlerin değeri geçersiz hale gelir.
*/

union unionTest
{
    int m,n;
}unionTest;

int main()
{
    int *A, *B, *M, *N;

    structTest.a = 2;
    structTest.b = 4;
    A = &structTest.a;
    B = &structTest.b;

    printf("%s","-----------------------------------\n");
    printf("%s","STRUCTURE\n\n");
    printf("Memory of Struct: %d\n", sizeof(structTest)); // degiskenlerin toplam bellek boyutuna gore kapasitesi
    printf("A: %d ---> Adress of A: %d\n",structTest.a,(void*)A);
    printf("B: %d ---> Adress of B: %d\n\n",structTest.b,(void*)B);

    unionTest.m = 2;
    unionTest.n = 4;
    M = &unionTest.m;
    N = &unionTest.n;

    printf("%s","-----------------------------------\n");
    printf("%s","UNION\n\n");
    printf("Memory of Union: %d\n", sizeof(unionTest)); // degiskenlerin en yuksek bellek boyutuna gore kapasite
    printf("M: %d ---> Adress of M: %d\n",unionTest.m,(void*)M);
    printf("N: %d ---> Adress of N: %d\n\n",unionTest.n,(void*)N);
    printf("%s","-----------------------------------\n");

    return 0;
}


/*
typedef (Tür Yeniden Adlandırma):
typedef anahtar kelimesi, mevcut bir veri tipinin yeni bir isimle yeniden adlandırılmasını sağlar.
Bu, karmaşık veri tiplerini daha kolay anlaşılır hale getirmek ve kodun daha okunabilir olmasını sağlamak için kullanılır.

// typedef example
typedef struct Students
{
    char name[MAX_SIZE];
    char lastname[MAX_SIZE];
    int age;
    int number;
}students;


int main()
{
    students student1;
    printf("%s","Enter student's name: ");
    scanf("%s",&student1.name);
    printf("%s","Enter student's lastname: ");
    scanf("%s",&student1.lastname);
    printf("%s","Enter student's age: ");
    scanf("%d",&student1.age);
    printf("%s","Enter student's name: ");
    scanf("%d",&student1.number);

    printf("\n\nStudent's Name: %s\nStudent's Lastname: %s\nStudent's Age: %d\nStudent's Number: %d\n",student1.name,student1.lastname,student1.age,student1.number);

    return 0;
}
*/
