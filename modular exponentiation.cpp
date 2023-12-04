#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	int res =1;

	while(n>0){
		if(n&1){
			//odd haai tho 
			res = (1LL * (res) * (x)%m)%m; //1ll means long long because idhar agar result into x karega tho uska nvalue zyada ayega and 
      //it wont fit in int range 2pow 32 so uske liye use kiya hai
		}
		x = (1LL * (x)%m*(x))%m; // even hai tho 
		n = n>>1; // yeh b/2 ke liye aise likhte hai that means for  /2 


	}
	return res;
}