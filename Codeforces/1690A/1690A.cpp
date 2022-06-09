  #include <iostream>
    
  using namespace std;
    
  int main()
  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tt;
    cin >> tt;
    while (tt--)
    {
      int x;
      cin >> x;
      if ( x % 3 == 0)
      cout << x / 3 << " " << x / 3 + 1 << " " << x / 3 - 1 << endl;
      else if (x % 3 == 1)
        if(x%2==0) {
          cout << x / 3 + 1 << " " << x / 3 + 2 << " " << x / 3 - 2 << endl;
        } else {
          cout << x / 3 << " " << x / 3 + 2 << " " << x / 3 - 1 << endl;
        }
      else
        cout << x/3 + 1<< " " << x / 3 + 2 << " " << x / 3 - 1 << endl;
    }
    return 0;
  }
  