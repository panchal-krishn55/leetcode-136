// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     int count=0;

// //     cout<<"Enter a number"<<endl;
// //     cin>>n;
// //     int lastdigit;

// //     while (n>0)
// //     {
// //         lastdigit=n%10;

// //         count=count+1;

// //         n=n/10;
// //     }
// //     cout<<"Total is"<<count;

// //     return 0;
    
// // }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
    

//     cout<<"Enter  the number"<<endl;
//     cin>>n;


//     int lastdigit;

//     int revrsnum=0;

//     while (n>0)
//     {
//         lastdigit=n%10;
//         revrsnum=(revrsnum*10)+lastdigit;
//         n=n/10;
//     }

//     cout<<"the reverse is:____"<<revrsnum;
//     return 0;


// }




// #include<iostream>
// using namespace std;
// int main(){
//     int n;

//     cout<<"enter a numbr:_"<<endl;
//     cin>>n;

//     int lastdigit;

//     int count=0;

//     while (n>0)
//     {
//         lastdigit=n%10;
//         count=count+1;
//         n=n/10;
//     }
//     cout<<count<<endl;
// }





//     cout<<"enter a numbr:_"<<endl;
//     cin>>n;

//     int lastdigit;

//     int reversenum=0;

//     while (n>0)
//     {
//         lastdigit=n%10;
//         reversenum=(reversenum*10)+lastdigit;
//         n=n/10;
//     }
//     cout<<reversenum<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     int rev=0;
//     int dup=n;

//     while (n>0)
//     {
//         int ld=n%10;
//         rev=(rev*10)+ld;
//         n=n/10;
// }
    
// if (rev==dup)
// {
//     cout<<"True";
// }
// else
// {
//     cout<<"false";
// }


// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the any number:_"<<endl;
//     cin>>n;

//     int dup=n;

//     int sum=0;
//     int lastdigit;

//     while (n>0)
//     {
//         lastdigit=n%10;
//         sum=sum+(lastdigit*lastdigit*lastdigit);
//         n=n/10;
//     }
//     if (dup==sum)
//     {
//         cout<<"this is armstrong number"<<endl;
//     }else
//     {
//         cout<<"this is not a armstrong number"<<endl;
//     }
    
    
// // }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"The enter form user a number"<<endl;
//     cin>>n;

//     for (int i = 1; i < n; i++)
//     {
//         if (n%i==0)
//         {
//             cout<<i<<" ";
//         }
        
//     }
    

// }


// #include<iostream>
// using namespace std;

// void Pattern(int n){
//     for (int i = 0; i <n; i++)
//     {
//         for (int j = 0; j< n; j++)
//         {
//             cout<<"@";

//         }
//         cout<<endl;
//     }
// }



// int main(){
// int n;
// cin>>n;
// Pattern(n);
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int n;

//     cout<<"enter the number"<<endl;
//     cin>>n;

//     int count=0;
    
//     while (n>0)
//     {
//         int lastdigit=n%10;
//         count+=1;
//         n=n/10;
//     }
//     cout<<count<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"which number you want to reverse "<<endl;
//     cin>>n;


//     int sum=0;

//     while (n>0)
//     {
//         int lastdigit=n%10;
//         int reverse=0;

//         reverse=(reverse*10)+lastdigit;

//         n=n/10;
// }
//     cout<<"reverse is"<<reverse<<endl;


// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     int rev=0;
//     int dup=n;

//     while (n>0)
//     {
//         int ld=n%10;
//         rev=(rev*10)+ld;
//         n=n/10;
// }
    
// if (rev==dup)
// {
//     cout<<"True";
// }
// else
// {
//     cout<<"false";
// }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number"<<endl;
//     cin>>n;

//     int dup=n;

//     int rev=0;

//     while (n>0)
//     {
//         int ld=n%10;
//         rev=(rev*10)+ld;
//         n=n/10;


//     }
//     if (dup==rev)
//     {
//         cout<<"this is a palindrom number"<<endl;
//         /* code */
//     }
//     else{
//        cout<<"this is not a palindrom number"<<endl;
//     }
    
   

// }


// #include<iostream>
// using namespace std;
// int main(){
// int n;
// int sum=0;
//     cout<<"enter the number"<<n;
//     cin>>n;

    
//     while (n>0)
//     {
//     int ld=n%10;
//     int sum=sum+(ld*ld*ld);
//     n=n/10;
//     }
//     {
//         cout<<"rhis is a armstrong number:__"<<sum<<endl; 
//     }
// }





// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the any number:_"<<endl;
//     cin>>n;

//     int dup=n;

//     int sum=0;
//     int lastdigit;

//     while (n>0)
//     {
//         lastdigit=n%10;
//         sum=sum+(lastdigit*lastdigit*lastdigit);
//         n=n/10;
//     }
//     if (dup==sum)
//     {
//         cout<<"this is armstrong number"<<endl;
//     }else
//     {
//         cout<<"this is not a armstrong number"<<endl;
//     }
    
    
// // }


// /////CHEAK DIVISIVOR
// #include<iostream>
// using  namespace std;
// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;

//     for (int i = 1; i < n; i++)
//     {
//         if (n%i==0)
//         {
//             cout<<" "<<i<<endl;
//         }

// }
// }



/////CHEAK NUMBER PRIME OR NOT
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the n value:______";
//     cin>>n;
//     int cnt=0;
//     for (int i = 1; i*i <= n; i++)
//     {
//         if (n%i==0)
//         {
//             cnt=cnt+1;
//             if ((n/i)!=i)cnt++;
//         }
        
//         if (cnt==2) cout<<"this is prime";
//         else cout<<"this is not prime";
    
// }}

// #include<iostream>
// using namespace std;
// int main(){
//     int n1,n2;
//     cout<<"Enter the n1 value"<<n1;
//     cout<<"Enter the n2 value"<<n2;
//     cin>>n1>>n2;

// for (int i = 1; i < min(n1,n2); i++)
// {
//    if (n2%i==0 && n2%i==0)
//    int gcd=i;
//    {
//     cout<<i;
//    }
   
// }


// }



// #include<utility>
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n value: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
