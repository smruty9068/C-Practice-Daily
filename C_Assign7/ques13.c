 int main(){
 struct out{//structure `out` with a character array and a character pointer
 char ch[10];
 char *str;
 };
 struct b{//structure `b` with a character pointer and an instance of `out`
 char *c;
 struct out o;
 };
 // Declare and initialize an instance of `b` named `s2`
 //// Struct `b` requires two pointers (`c` and `o.str`) and a character array (`o.ch`).
 struct b s2={"ODISHA", "KHURDA","JOYDEV"};
 printf("%s %s %s\n",s2.c,s2.o.str,s2.o.ch);//ODISHA KHURDA JOYDEV
// `s2.c` points to "ODISHA", `s2.o.str` points to "KHURDA",
// and `s2.o.ch` is assigned "JOYDEV" (string copied into `ch[10]`).
// Print the values of the fields in `s2
 printf("%s %s\n",++s2.c,++s2.o.str);//DISHA HURDA
 /*++s2.c: Increments the pointer s2.c to point to "DISHA", slicing off the first character of "ODISHA".
++s2.o.str: Increments the pointer s2.o.str to point to "HURDA", slicing off the first character of "KHURDA".*/
 return 0;
 }