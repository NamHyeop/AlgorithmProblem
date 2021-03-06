#include<bits/stdc++.h>

using namespace std;

int n, m;
int arr[7];
vector<int> v;

void func(int level)
{
	if (level == m)
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}

	bool visited[10001];
	memset(visited, false, sizeof(visited));

	for (int i = 0; i < n; i++)
	{
		if (!visited[v[i]])
		{
			arr[level] = v[i];
			visited[v[i]] = true;
			func(level + 1);
		}
	}

}
int main(int argc, char *argv[])
{
	cin >> n >> m;
	v.resize(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	func(0);
}
