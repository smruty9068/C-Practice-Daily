//Following declaration is correct or wrong
 union person{// union allows different members to share the same memory location.
   int a;
   struct health{
     int e;
    }h;
 };

 //Is correct
 //The struct health is defined within the union. It is valid to have a nested struct declaration inside a union

 /*All members of a union share the same memory. 
 The size of the union will be determined by the size of its largest member. 
 In this case, the size of the union will be the larger of:
sizeof(int) (for a).
sizeof(struct health) (which contains an integer e, so its size will also likely be sizeof(int)).*/


//You can access the union members like this:
/*
union person p;
p.a = 10;  // Assign value to `a`.
p.h.e = 20;  // Assign value to `e` in the nested struct `health`.
*/

/*When one member of the union is updated, 
the values of other members become indeterminate because all members share the same memory.*/