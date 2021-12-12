// Factorial
// Factors
// Prime number
// Armstrong number
// Reverse a number


#include <iostream>
using namespace std;

int main(){

    // int n,fact=1;
    // cout<<"Enter a number"<<endl;
    // cin>>n;
    // for (int i=1;i<=n;i++){

    //     fact=fact*i;
    // }
    // cout<<"The factorial of "<<n<<" is "<<fact<<endl;

    // // // ---------------------------------
    // // // IF SUM OF FACTORS OF THE NUMBER IS DOUBLE THE NUMBER, THEN IT IS PERFECT NUMBER

    // int m,sum=0;
    // cout<<"Enter m"<<endl;
    // cin>>m;
    // for (int j=1;j<=m;j++){
    //     if (m%j==0){
    //         sum=sum+j;
    //         cout<<j<<endl;
    //     }
    // }
    // if(2*m==sum){
    //     cout<<"It is a perfect number";
    // }
    // cout<<"The sum of factors is "<<sum<<endl;


    // //-------------------------------------------

    // int x;
    // cout<<"Enter a number";
    // cin>>x;
    // for (int z=2;z<x;z++){
    //     if(x%z==0){
    //         cout<<"Not prime";
    //         break;
    //     }
    //     else {
    //         cout<<"Prime";
    //         break;
    //     }
    // }
    // // -----------------------------

    // int n,r,Sum=0,m;
    // cout<<"Enter n"<<endl;
    // cin>>n;
    // m=n;
    // while(n>0){
    //     r=n%10;
    //     n=n/10;
    //     Sum=Sum+r*r*r;
    //     }
    //     cout<<Sum<<endl;
    //     if (m==Sum){
    //         cout<<"It is armstrong number";
    //     }
    //     else{
    //         cout<<"Not an armstrong number";
    //     }



    // --------------------------------------

    int num,rem,rev=0;
    cout<<"Enter num"<<endl;
    cin>>num;
    while(num>0){
        rem=num%10;
        num=num/10;
        cout<<rem<<endl;
        // rev=rev*10+rem;
    }
    // cout<<rev;

    return 0;

}








