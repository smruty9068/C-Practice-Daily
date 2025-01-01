// The following structure template is allowed or not in ANSI C
 struct person{
 int a;
 struct health{
 int a;
 }h;
 };
 /*not allowed in ANSI C because nested structure definitions (defining a structure inside another structure) are not permitted in the ANSI C standard.*/

 /*
 // Define struct health at the global scope
struct health {
    int a;
};
// Use struct health inside struct person
struct person {
    int a;
    struct health h;
};

 */