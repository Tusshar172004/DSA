class Solution {
public:
    int reverse(int x) {
        long long rev = 0;   // use long long temporarily

        while (x != 0) {
            int last = x % 10;
            rev = rev * 10 + last;

            // check overflow
            if (rev > INT_MAX || rev < INT_MIN) {
                return 0;
            }

            x /= 10;
        }

        return (int)rev;   // safe cast
    }
};
