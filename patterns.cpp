// TOPIC:- STAR PATTERN PROBLEMS.


//Q1. Draw 5 rows of 10 stars.
// solution:-
// #include <iostream>
// using namespace std;
// int main(){
//     int n= 5;
//     for(int i=1;i<=n;i++){
//         int m= 10;
//         for(int j=1;j<=m;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Q2. pattern 
//1 2 3 4
//5 6 7 8
//9 10 11 12
//13 14 15 16


//solution:-
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int num=1 ;
//     cout<<"Enter the number of rows. ";
//     cin>> n;
//     for(int i=0; i<n; i++){
        
//         for( int j=0; j<n; j++){
//             cout<< num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//Q3. pattern
//A B C
//D E F
//G H I

//solution:-
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     char ch= 'A';
//     cout<<"Enter the number of rows. ";
//     cin>> n;
//     for(int i=0; i<n;i++){
//         for(int j=0; j<n; j++){
//             cout<< ch;
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Q4. pattern(TRIANGLE PATTERN)
//*
//** 
//***
//****

//solution:-
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows. ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<"*";        
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Q5. pattern. 
//1
//22
//333
//4444

//solution:-
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows. ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<i+1;       
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Q6. pattern.
//A
//BB
//CCC
//DDDD

//solution:-
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     char ch= 'A';
//     cout<<"Enter the number of rows. ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<ch;      
//         }
//         ch++;
//         cout<<endl;
//     }
//     return 0;
// }

//Q7. Pattern. 
//1
//12
//123
//1234

//solution1:-(zee)
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows. ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         int num=1;
//         for(int j=0; j<=i; j++){
//             cout<<num;
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//solution2:-(teach)
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows. ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<j+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Q8. pattern. 
//1
//21
//321
//4321

//solution:-
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows. ";
//     cin>>n;
//     for(int i=0; i<n ; i++){
//         for(int j=i+1; j>0; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//Q9. pattern.
//4321
//321
//21
//1

//solution2:-(teach)
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows. ";
//     cin>>n;
//     for(int i=n; i>0 ; i--){
//         for(int j=i; j>0; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//solution1:-(zee)
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the humber of rows. ";
//     cin>>n;
//     for(int i=n; i>0; i--){
//         int w=i;
//         for(int j=0; j<=i-1; j++){
//             cout<<w;
//             w--;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Q10. Draw floyd's triangle pattern.
//1
//2 3
//4 5 6
//7 8 9 10

//solution:-
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int num=1;
//     cout<<"Enter the number of rows. ";
//     cin>> n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Q11. pattern.
//A
//B A
//C B A
//D C B A

//solution:-(zee)
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows. ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         char ch='A';
//         for(int j= i; j>=0; j--){
//             cout<<char(ch+j)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Q12. pattern.
//A
//B C
//D E F
//G H I J

//solution:-(zee)
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     char ch='A';
//     cout<<"Enter the number of rows. ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Q13. pattern.
//1111
// 222
//  33
//   4

//solution1:-(zee)
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int num=1;
//     cout<<"Enter the number of rows. ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         for(int w=0; w<n-i; w++){
//             cout<<num;
//         }
//         num++;
//         cout<<endl;
//     }
//     return 0;
// }

//solution2:-(teach)
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows. ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         for(int w=0; w<n-i; w++){
//             cout<<i+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Q14. pyramid pattern.

//solution1:-(zee)
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows. ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<i; j++){
//             cout<<j+1;
//         }
//         for(int j=i-1; j>0; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//solution2:-(teach)
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows. ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         for(int j=1; j<=i+1; j++){
//             cout<<j;
//         }
//         for(int j=i; j>0; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



