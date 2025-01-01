 struct s{int *p;};
 //struct s contains a single member p, which is a pointer to an integer.
 int main(){
    int a=200;struct s s1; //int a=200 is initialized and struct s named s1 is declared
 s1.p=&a;// pointer p inside s1 is assigned the address of a
 *(s1.p)=*(s1.p)+100;//*(s1.p) dereferences the pointer p, accessing the value of a.
 // value of a (200) is incremented by 100, making a = 300.
 printf("%d %d\n",a,*(s1.p));// 300 300
//a is directly printed, which is 300.
//*(s1.p) dereferences the pointer p to print the updated value of a, which is also 300.

 return 0;}

 /*
 Pointer Assignment: The line s1.p = &a; ensures that p points to a, enabling modifications to a through the pointer.

Pointer Dereferencing: *(s1.p) = *(s1.p) + 100; updates the value of a via the pointer p. This demonstrates how pointers can be used to manipulate variables indirectly.

Output Validation: Since s1.p points to a, both a and *(s1.p) will always have the same value after the modification.
 */