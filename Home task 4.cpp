#include <iostream>
using namespace std;
int main ()
//{
//	for (int x=1; x<=150; x++) {
//		if (x%10==0) {
//			continue;
//		}
//		cout<<x<<endl;
//	}
//}

//{
//	int x, sum;
//	cout<<"enter a number "<<endl;
//	cin>>x;
//	if (x>0) {
//		do {
//			sum = sum+(x%10);
//			x=x/10;
//			}
//			while(x!=0);
//			cout<<"the sum of digits is "<<sum<<endl;
//	}
//	else {
//		cout<<"the number entered is invalid try something else"<<endl;
//	}
//}


{
	 int d, n;
  bool is_prime = true;

  cout << "Enter a positive integer ";
  cin >> n;

  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (d = 2; d <= n/2; ++d) {
    if (n % d == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)  {
  
    cout << n << " is a prime number"; }
  else {
  
    cout << n << " is not a prime number"; 
}

  return 0;
}
	
	
