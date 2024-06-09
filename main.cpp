//OPERATORS

//UNARY OPERATOR (increment)
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     cout<< ++a;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     cout<< a++;
// }

//(decrement)
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     cout<<--a;
// }

#include<iostream>
using namespace std;
// int main(){
//     int a = 5;
//     cout<<a--;
// }

//BINARY OPERATOR
// 1. arithimatic operator
// int main(){
//     int a = 10;
//     int b = 5;
//     cout<<(a+b)<<endl;
//     cout<<(a-b)<<endl;
//     cout<<(a*b)<<endl;
//     cout<<(a/b)<<endl;
//     cout<<(a%b)<<endl;
// }

// 2. relational operator
// int main(){
//     int a = 10;
//     int b = 5;
//     cout<<(a>b)<<endl;
//     cout<<(a<b)<<endl;
//     cout<<(a>=b)<<endl;
//     cout<<(a<=b)<<endl;
//     cout<<(a==b)<<endl;
//     cout<<(a!=b)<<endl;
// }

// 3. logical operator
// int main(){
//     bool condition1 = (10>5);
//     bool condition2 = (5>=5);
//     bool condition3 = (2==2);
//     if (condition1 && condition2 && condition3){
//         cout<<"All condition is true."<<endl;
//     }
//     else{
//         cout<<"All condition are not true."<<endl;

//     }
// }

// int main(){
//     bool condition1 = (7<5);
//     bool condition2 = (5<=5);
//     bool condition3 = (2!=2);
//     if (condition1 || condition2 || condition3){
//         cout<<"All condition is true."<<endl;
//     }
//     else{
//         cout<<"All condition are not true."<<endl;

//     }
// }
// ! gives true to result as false and false to result as true.

// 4. assignment operator
// int main(){
//     int a = 10;
//     cout<<(a+=2)<<endl;
//     cout<<(a-=2)<<endl;
//     cout<<(a*=2)<<endl;
//     cout<<(a/=2)<<endl;
//     cout<<(a%=2)<<endl;
// }

// 5. bitwise operator
int main(){
    cout<< (5&4)<<endl;
    cout<< (5|4)<<endl;
    cout<< (~1)<<endl;
    cout<< (5<<1)<<endl;
    cout<< (5>>1)<<endl;
    cout<< (5^5)<<endl;
}