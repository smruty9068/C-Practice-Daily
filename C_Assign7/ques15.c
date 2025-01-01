 int main(){
 union unit{// define a union names unit
 int marks;
 int roll;
 }s1,s2;//declare 2 union variables: s1 and s2
 s2.roll=23;
// Since `s2` is a union, `marks` and `roll` share the same memory location.
// Assigning a value to `marks` overwrites the value in `roll`.
 s2.marks=60;
 printf("Check memory alloc for union\n");//Check memory alloc for union
// Since the last assignment was `s2.marks = 60`, this value overwrites the memory,
// and `s2.roll` will also display `60` because both fields are the same in memory.
 printf("%d..%d\n",s2.marks,s2.roll);//60..60
 return 0;
 }
 //In a union, all members share the same memory location.
//Modifying one member affects the value of all other members.
