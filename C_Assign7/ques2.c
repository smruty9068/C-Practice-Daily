// Detect any invalid member present in the given structure
 struct date{
 int m,d,y;
 };
 struct stud{
 char name[20];//array of 20 characters
 struct stud *p;//Pointer to another struct stud.
 struct date *d;//Pointer to a struct date.
 //int (*)fun(int, int);//Missing name for the function pointer.
 int (*fun)(int, int); // Valid declaration of a function pointer.

 };