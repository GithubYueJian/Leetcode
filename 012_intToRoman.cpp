class Solution {
public:
    string intToRoman(int num) {
    const vector<string> thousands{"","M","MM","MMM"};
	const vector<string> hundreds{"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
	const vector<string> tens{"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
	const vector<string> ones{"","I","II","III","IV","V","VI","VII","VIII","IX"};
	return thousands[num / 1000] + hundreds[(num % 1000) / 100] + tens[(num % 100) / 10] + ones[num % 10];


    }
};
