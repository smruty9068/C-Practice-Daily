/*Check the declaration of the structure.
 Write a valid conclusion whether Line-5 can be valid member or not.*/
 struct person{
 int ht;
 float wt;
 char color;
 //struct person p; /*Line- 5 */
 struct person *p; /* Valid */
};


//struct person p;
 /*n C, a structure cannot directly include an instance of itself as a member because it would lead to an infinitely recursive definition. 
 This would make it impossible to determine the size of the structure at compile time.*/