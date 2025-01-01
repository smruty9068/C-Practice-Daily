//Following declaration is correct or wrong
 struct person{
 int a;
 union health{
 int w;
 }h;
 };
 /*This declaration is valid in ANSI C.
  Unlike nested structures, nested unions within a structure are allowed in ANSI C. 
 The union health is declared inside the structure person and is properly instantiated as the member h.*/


 /*The union's members share the same memory space, meaning only one member of the union can hold a value at any given time*/