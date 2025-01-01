/*
 Write valid or invalid form of the followings.
 (1) union{....}u;
     //Valid.
     This defines an anonymous union and simultaneously declares a variable u of that union type.
union {
    int a;
    float b;
} u; // Valid



 (2) union u{......};
     //Valid.
     This defines a named union (u) which can later be used to declare variables of type union u.
union u {
    int a;
    float b;
}; // Valid
union u var1; // Declare a variable of type `union u`



 (3) struct{.....}s;
     //Valid.
     This defines an anonymous struct and simultaneously declares a variable s of that struct type.
struct {
    int a;
    float b;
} s; // Valid



 (4) struct s{.....};
     //Valid.
     This defines a named struct (s) which can later be used to declare variables of type struct s.
struct s {
    int a;
    float b;
}; // Valid
struct s var1; // Declare a variable of type `struct s`

*/