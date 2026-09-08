class Solution {
public:
    int countPrimes(int n) {

        if (n <= 2)
            return 0;

        // Only store odd numbers
        vector<bool> prime(n, true);

        prime[0] = prime[1] = false;

        // 2 is the only even prime
        int cnt = 1;

        // Check only odd numbers
        for (int i = 3; i * i < n; i += 2) {

            if (prime[i]) {

                // Start from i*i
                // Skip even multiples
                for (int j = i * i; j < n; j += 2 * i) {
                    prime[j] = false;
                }
            }
        }

        // Count remaining odd primes
        for (int i = 3; i < n; i += 2) {
            if (prime[i])
                cnt++;
        }

        return cnt;
    }
};