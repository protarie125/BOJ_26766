#include <iostream>
#include <sstream>

using namespace std;

void p(ostringstream& oss) {
	oss << R"( @@@   @@@ 
@   @ @   @
@    @    @
@         @
 @       @ 
  @     @  
   @   @   
    @ @    
     @     )";
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n; cin >> n;
	auto oss = ostringstream{};
	while (0 < (n--)) {
		p(oss);
		if (0 < n) {
			oss << '\n';
		}
	}

	cout << oss.str();

	return 0;
}