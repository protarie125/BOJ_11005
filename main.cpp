#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, b;
	cin >> n >> b;

	if (0 == n) {
		cout << 0;
		return 0;
	}

	auto oss = ostringstream{};
	while (0 < n) {
		const auto r = n % b;
		if (r < 10) {
			oss << r;
		}
		else {
			oss << static_cast<char>('A' + (r - 10));
		}

		n /= b;
	}

	auto str = oss.str();
	reverse(str.begin(), str.end());
	cout << str;

	return 0;
}