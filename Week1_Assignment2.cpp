//1. Find the output for this code. Let input:- 2 3 6
#include <iostream>
using namespace std;
int main()
{
int x;
cout << "Enter first number\n";
cin >> x; // user will give ‘x’ a value.
int y, m;
cout << "Enter second number and value for taking modulus\n";
cin >> y >> m; // user will give ‘y’ a value.
int Z = (x * y) % m;
cout << "Output is: " << Z;
}
//Enter first number
//2
//Enter second number and value for taking modulus
//3
//6
//Output is: 0

//2. Find the output for this code. Let input:- 3 2
#include <iostream>
using namespace std;
int main()
{
int x;
cout<<"Enter first number\n";
cin>>x; // user will give 'x' a value.
int y;
cout<<"Enter second number\n";
cin>>y; // user will give 'y' a value.
cout<<(x!=y)<<" "<<(x>=y);
}

//output
//Enter first number
//3
//Enter second number
//2
//1 1

//3. Find the output for this code. Let input:- 2 3
#include <iostream>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
x+=y;
x-=y;
x%=y;
cout<<x;
}

//output
//2
//3
//2

//4. WAP for finding the volume of the cylinder by taking radius and height as input.
#include <iostream>
using namespace std;
int main()
{
int r,h,volume;
cout<<"Enter radius\n";
cin>>r;
cout<<"Enter height\n";
cin>>h;
volume = 3.14*r*r*h;
cout<<"volume of cylinder: "<<volume;
return 0 ;
}



//5. WAP to find the difference between ASCII of two characters ,take them as input .
#include <iostream>
using namespace std;
int main() { 
    char ch1, ch2;
    cout << "Enter first character: ";
    cin >> ch1;
    cout << "Enter second character: ";
    cin >> ch2;
    cout<< "ASCII difference: " << int(ch1) - int(ch2);
    return 0;
    
}


//6. Find the output of the below code
#include <iostream>
using namespace std;
int main()
{
int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ;
cout<<i;
}

//output
49

