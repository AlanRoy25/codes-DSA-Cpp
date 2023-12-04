class Solution {
public:
    int countPrimes(int n) {
        int cnt =0;
        vector<bool>prime(n+1, true); // mark every no has prime
        prime[0] = prime[1] = false;

        for(int i=2; i<n; i++){
            if(prime[i]){
                cnt ++;
                for(int j=2*i; j<n; j=j+i){
                    prime[j]=0; // ab isme vo mark kardo all those which are in the table
                }

            }
        }
        return cnt;

    }
};