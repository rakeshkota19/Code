#include<bits/stdcc++.h>
using namespace std;


typedef pair<int, int> p;


//brutre force

vector<int> twoSum(vector<int>& nums, int target) {
	for (int i = 0 ; i < arr.size() ; i++) {
		for (int j = i + 1 ; j < arr.size() ; j++) {
			if (arr[i] + arr[j] == target) {
				return vector<int> {i, j};
			}
		}
	}
}


// memorising

vector<int> twoSum(vector<int>& arr, int target) {
	unordered_map<int, int>m;
	int required_val;

	for (int i = 0 ; i < arr.size() ; i++) {

		required_val = target - arr[i];

		if (m.find(required_val) != m.end()) {
			return vector<int> {i, m[required_val]};
		}

		m[arr[i]] = 1;
	}

	return vector<int> {};
}

// bs, 2 pointer

vector<int> twoSum(vector<int>& arr, int target) {

	vector<p> pair_arr;
	for (int i = 0 ; i < arr.size() ; i++) {
		pair_arr.push_back(make_pair(arr[i], i));
	}

	sort(pair_arr.begin(), pair_arr.end());

	int high = arr.size() - 1, low = 0;

	while (low < high) {
		while (pair_arr[low].first + pair_arr[high].first > target) {
			high--;
		}


		if ( pair_arr[low].first + pair_arr[high].first == target) {
			return vector<int> {pair_arr[low].second, pair_arr[high].second};
		} else {
			low++;
		}

	}

	return vector<int> {};
}