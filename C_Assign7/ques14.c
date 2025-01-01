 int main(){
 union unit{// Define a union named `unit`
 int marks;
 int roll;
 }s1,s2;// Declare two union variables: s1 and s2
 s2.roll=23;
 s1.marks=60;
 printf("%d..%d\n",s1.marks,s2.roll);//60..23
 return 0;
 }
 /*s1.marks retains its value (60) because s2 is a separate union variable.
s2.roll retains its value (23) because it is independent of s1*/



