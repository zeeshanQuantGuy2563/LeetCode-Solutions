//SUM OF TWO NUMBERS

// #include <iostream>
// using namespace std;
// int main(){
//     int a, b;
//     cout<<"Enter the first number"<<endl;
//     cin>>a;
//     cout<<"Enter the second number"<<endl;
//     cin>>b;
//     cout<<"The sum of two numbers is:"<<(a+b)<<endl;
//     return 0;

// }

//ODD AND EVEN CHECK

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number to be checked:";
//     cin>> n;
//     if(n%2==0){
//         cout<<"The number is even.\n";
//     }else{
//         cout<<"The number is odd.\n";
//     }
//     return 0;

// }

//GRADE CHECK FOR STUDENTS

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the marks of student out of 100:";
//     cin>> n;
//     if(n<=100 && n>=80){
//         cout<<"The grade of student is A.\n";
//     }else if(n<80 && n>=60){
//         cout<<"The grade of student is B.\n";
//     }else{
//         cout<<"The grade of student is C.\n";
//     }
//     return 0;
// }


// even and odd
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the number:";
//     cin>> a;
//     if(a%2==0){
//         cout<<"The numnber is even.";
//     }else{
//         cout<<"The number is odd.";
//     }
//     return 0;
// }


//SUM OF NUMBERS FROM 1 TO N
//1. by while loop
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int i=1;
//     int sum=0;
//     cout<<"Enter the value of n.";
//     cin>> n;
//     while(i<=n){
//         sum+=i;
//         i++;
//     }
//     cout<<"The sum of the numbers is:"<<sum;
//     return 0;
// }
//2. by for loop
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     cout<<"Enter the value of n";
//     cin>>n;
//     for(int i=1;i<=n ;i++){
//         sum+=i;
//     }
//     cout<<"The sum of n natural numbers is:"<<sum;
//     return 0;
// }

// NESTED LOOPS.(PATTERN PROBLEMS)
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
 
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>> n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows: ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         char ch='A';
//         for(int j=0;j<n;j++){
//             cout<< ch;
//             ch= ch+1;
//         }
//         cout<<endl;

//     }
//     return 0;
// }

//Q. pattern 
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

// #include <iostream>
// using namespace std;

// int minoftwo(int a, int b){
//     if(a>b){
//         return b;
//     }else{
//         return a;
//     }
//     return a; // To satisfy the compiler of a return value.
// }
// int main(){
//     int a;
//     int b;
//     cout<<"Enter the first number. ";
//     cin>>a;
//     cout<<"Enter the second number. ";
//     cin>>b;
//     cout<<"The minimum of two numbers is: "<<minoftwo(a,b)<< endl;;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int sum(int n){ //function for sum of numbers from 1 to N.
//     int num=0;
//     for(int i=1; i<=n; i++){
//         num+=i;
//     }
//     return num;
// }

// int main(){
//     int n;
//     cout<<"Enter the value of N. ";
//     cin>>n;
//     cout<<"The sum of numbers from 1 to "<<n<<" is "<<sum(n)<<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int fact(int n){
//     int fac=1;
//     if(n==0){
//         return 1;
//     }else{
//     for(int i=1; i<=n; i++){
//         fac*=i;
//     }
//     return fac;
//     }
// }    

// int main(){
//     int n;
//     cout<<"Enter the number N. ";
//     cin>>n;
//     cout<<"The factorial of the number "<<n<<" is "<<fact(n)<<endl;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int marks[5]={99, 98, 97, 56, 100};
//     cout<<marks[0]<<endl;
//     cout<<marks[4]<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int nums[5]={10,15,35,47,53};
//     int smallest=INT_MAX;
//     for(int i=0; i<5; i++){
//         if(nums[i]<smallest){
//             smallest=nums[i];
//         }
//     }
//     cout<<"The smallest number of the array is "<<smallest<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int nums[5]={10,15,13,-1,52};
//     int greatest=INT_MIN;
//     for(int i=0; i<5; i++){
//         if(nums[i]>greatest){
//             greatest=nums[i];
//         }
//     }
//     cout<<"The greatest number of the array is "<<greatest<<endl;
//     return 0;

// }


// #include <iostream>
// using namespace std;
// int main(){
//     int nums[5]={10,15,13,-1,52};
//     int greatest=INT_MIN;
//     for(int i=0; i<5; i++){
//         greatest=max(nums[i],greatest);
//     }
//     cout<<"The greatest number of the array is "<<greatest<<endl;
//     return 0;

// }



// #include <iostream>
// using namespace std;
// int linear_search(){
//     int nums[]={10,15,17,45,36,58,100};  //traget is 100.
//     for(int i=0; i<sizeof(nums)/sizeof(int); i++){
//         if(nums[i]==100){
//             return i;
//             }
//         }
//     return -1;
// }
// int main(){
//     cout<<"The target value is at index. "<<linear_search()<<endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int linear_search(vector <int> vec, int target){
//     int idx=0;
//     for(int val: vec){
//         if(val==target){
//             return idx;
//         }
//         idx++;
//     }
//     return -1;
// }

// int main(){
//     vector <int> vec={1,2,3,4,5,6,80,70,40};
//     int taregt;
//     cout<<"Enter the value of target: ";
//     cin>>taregt;
//     cout<<"The target element is at index. "<<linear_search(vec, taregt)<<endl;
//     return 0;
// }

//Q. MOORE'S ALOGRITHM. (Voting Method)

//solution:-
