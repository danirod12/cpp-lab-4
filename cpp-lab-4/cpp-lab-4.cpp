#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    if (n * (n + 1) % 4 != 0) {
        std::cout << "NO\n";
        return 0;
    }
    std::cout << "YES\n";

    // debug
    int sum1 = 0, sum2 = 0;

    if (n % 4 == 0) {
        std::cout << n / 2 << "\n";
        for (int i = 1; i < n; i += 4) {
            sum1 += i * 2 + 3;
            std::cout << i << " " << i + 3 << " ";
        }

        std::cout << "\n" << n / 2 << "\n";
        for (int i = 2; i < n; i += 4) {
            sum2 += i * 2 + 1;
            std::cout << i << " " << i + 1 << " ";
        }
    }
    else {
        std::cout << n / 2 + 1 << "\n";
        for (int i = 1; i <= n / 2; i += 2) {
            sum1 += n;
            std::cout << i << " " << n - i << " ";
        }

        std::cout << "\n" << n / 2 << "\n" << n << " ";
        sum2 += n;
        for (int i = 2; i < n / 2; i += 2) {
            sum2 += n;
            std::cout << i << " " << n - i << " ";
        }
    }

    // debug that should not happen no way
    if (sum1 != sum2) {
        std::cout << "Logic error, " << sum1 << " != " << sum2;
        throw "Logic error!";
    }
    /* debug
    else {
        std::cout << "\n\n[debug] Splitted " << n << " (" << n * (n + 1) / 2 << ") to " << sum1;
    }
    */
}
