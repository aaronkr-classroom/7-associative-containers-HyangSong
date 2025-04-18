#include <iostream>
#include <string>

using namespace std;

void rev_str(string& s, int start, int end) {
	if (start >= end) // 중앙위치를 넘다
		return;

	char temp = s[start];
	s[start] = s[end];
	s[end] = temp;

	// 재귀적 단계
	rev_str(s, start + 1, end - 1);
}

int main() {
	string s;
	cout << "Enter a strng: ";
	cin >> s;

	rev_str(s, 0, s.length() - 1);

	cout << "Reverse string: " << s << endl;
	return 0;
}