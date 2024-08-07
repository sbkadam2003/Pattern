#include<iostream>
using namespace std;

int print1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            cout<<"*"<<" ";
        }
         cout<<endl;
    }
   
    return 0;
}
int print2(int n)
{
      for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }
          cout<<endl;
    }
    return 0;
}
int print3(int n)
{
      for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
          cout<<endl;
    }
    return 0;
}
int print4(int n)
{
      for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
          cout<<endl;
    }
    return 0;
}
int print5(int n)
{ 

      for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"*"<<" ";
        }
          cout<<endl;
    }
    return 0;
}
int print6(int n)
{ 

      for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
          cout<<endl;
    }
    return 0;
}
int print7(int n)
{ 

      for(int i=0;i<n;i++){
        // space 
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        // stars
        for(int j=0;j<(02*i)+1;j++){
            cout<<"*";
        }
        //  space
        for(int j=0;j<n-i-1;j++){
             cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
int print8(int n)
{ 
      for(int i=0;i<n;i++){
        // space 
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        // stars
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        //  space
        for(int j=0;j<i;j++){
             cout<<" ";
        }
        
          cout<<endl;
    }
    return 0;
}
int print9(int n)
{ 

      for(int i=0;i<n;i++){
        // space 
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        // stars
        for(int j=0;j<(02*i)+1;j++){
            cout<<"*";
        }
        //  space
        for(int j=0;j<n-i-1;j++){
             cout<<" ";
        }
        cout<<endl;
    }

      for(int i=0;i<n;i++){
        // space 
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        // stars
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        //  space
        for(int j=0;j<i;j++){
             cout<<" ";
        }
        
          cout<<endl;
    }
    return 0;
}
int print10(int n){
    for(int i=1;i<=(2*n-1);i++){
        int x=i;
        if(i>n) x=(2*n)-i;
        for(int j=1;j<=x;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
int print11(int n){
    int start=1;
    for(int i=0;i<n;i++){
    if(i%2==0) start=1; //even 
    else start=0; // odd 
    for(int j=0;j<=i;j++){
        cout<<start;
        start=1-start;
    }
     cout<<endl;   
    }
    return 0;
}
int print12(int n){
    int space=2*(n-1);
   for(int i=1;i<=n;i++){
       //number 
       
       for(int j=1;j<=i;j++){
           cout<<j;
       }
       
       //space
       for(int j=1; j<space;j++){
           cout<<" ";
       }
       
       
       //number
       for(int j=i;j>=1;j--){
           cout<<j;
       }
       cout<<endl;
       space -=2;
   }
    return 0;
}
int print13(int n){
    int num=1;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           cout<<num<<" ";
           num +=1;
       }
       cout<<endl;
      
   }
    return 0;
}
int print14(int n){
   for(int i=0;i<=n;i++){
       for(char ch='A'; ch <='A'+i; ch++){
           cout<<ch<<" ";
       }
       cout<<endl;
      
   }
    return 0;
}
int print15(int n){
   for(int i=0;i<=n;i++){
       for(char ch='A'; ch <='A'+(n-i-1); ch++){
           cout<<ch<<" ";
       }
       cout<<endl;
      
   }
    return 0;
}
int print16(int n){
   for(int i=0;i<n;i++){
       char ch='A'+i;
       for(int j=0;j<=i; j++){
           cout<<ch<<" ";
       }
       cout<<endl;
   }
    return 0;
}
int print17(int n)
{ 

      for(int i=0;i<n;i++){
        // space 
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        // chartectar
        char ch='A';
        int breakp = (2*i+1)/2;
        for(int j=1;j<=2*i +1;j++){
            cout<<ch;
            if(j<= breakp) ch++;
            else ch--;
        }
        //  space
        for(int j=0;j<n-i-1;j++){
             cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
int print18(int n)
{ 

      for(int i=0;i<n;i++){
          //only for input 4
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}
int print19(int n)
{ int temp=0;
      for(int i=0;i<=n;i++){
          // star
          for(int j=1;j<=n-i;j++){
              cout<<"*";
          }
          //space
            for(int j=0;j<temp;j++){
              cout<<" ";
          }
          //star 
            for(int j=1;j<=n-i;j++){
              cout<<"*";
          }
          temp+=2;
        cout<<endl;
    }
    
    //symmetry
    
    temp=2*n-2;
     for(int i=1;i<=n;i++){
          // star
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          //space
            for(int j=0;j<temp;j++){
              cout<<" ";
          }
          //star 
            for(int j=1;j<=i;j++){
              cout<<"*";
          }
          temp-=2;
          
        cout<<endl;
    }
    return 0;
}
int print20(int n)
{ int sp=2*n-2;
      for(int i=1;i<=2*n-1;i++){
          //star
          int temp=i;
          if(i>n)  temp=2*n-i;
          
          for(int j=1;j<=temp;j++){
              cout<<"*";
          }
          
          //space
           for(int j=1;j<=sp;j++){
              cout<<" ";
          }
          //star
          for(int j=1;j<=temp;j++){
              cout<<"*";
          }
          
        cout<<endl;
        if(i<n) sp -=2;
        else sp+=2;
    }
    return 0;
}
int print21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||i==n-1||j==n-1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
int print22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            cout<<(n-min(min(top,down),min(left,right)))<<" ";
        }
      
        cout<<endl;
    }
    return 0;
}
int main(){
  
        int n;
        cin>>n;
        print1(n);
        print22(n);

    return 0;
    
}